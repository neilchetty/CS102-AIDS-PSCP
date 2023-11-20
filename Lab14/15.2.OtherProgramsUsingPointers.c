// Demonstrate usage of pointers using programs

#include <stdio.h>

int findMax(int *arr, int size)
{
    int max = *arr;
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }
    return max;
}

int main()
{
    int size;
    printf("Enter size of array\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    int max = findMax(arr, size);
    printf("Maximum element in the array: %d\n", max);
    return 0;
}

// OUTPUT
/*
Enter size of array
5
Enter the elements of array
5 4 3 2 1
Maximum element in the array: 5
*/
