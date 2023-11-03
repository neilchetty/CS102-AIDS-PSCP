// Sort n number of an array.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
    int index[n];
    for (int i = 0; i < n; i++)
    {
        index[i] = i;
    }
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of array before sorting are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int temp, tempIndex;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                tempIndex = index[j - 1];
                index[j - 1] = index[j];
                index[j] = tempIndex;
            }
        }
        printf("The elements of array after %d pass are\n", i + 1);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    printf("The elements of array after sorting are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d , Original Index: %d , Current Index: %d\n", arr[i], index[i], i);
    }
    printf("\n");
    return 0;
}

// OUTPUT

/*
Enter the number of elements in array
5
Enter the elements of array
5 4 3 2 1
The elements of array before sorting are
5 4 3 2 1
The elements of array after 1 pass are
4 3 2 1 5
The elements of array after 2 pass are
3 2 1 4 5
The elements of array after 3 pass are
2 1 3 4 5
The elements of array after 4 pass are
1 2 3 4 5
The elements of array after 5 pass are
1 2 3 4 5
The elements of array after sorting are
1 , Original Index: 4 , Current Index: 0
2 , Original Index: 3 , Current Index: 1
3 , Original Index: 2 , Current Index: 2
4 , Original Index: 1 , Current Index: 3
5 , Original Index: 0 , Current Index: 4
*/
