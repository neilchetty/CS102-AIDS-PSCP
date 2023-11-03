// Sort n number of an array.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
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
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                // Swapping
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
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
        printf("%d ", arr[i]);
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
1 2 3 4 5
*/
