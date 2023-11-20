// Demonstrate usage of pointers using programs
#include <stdio.h>

void sortArray(int *arr, int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
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
    printf("Before sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    sortArray(arr, size);
    printf("\nAfter sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// OUTPUT
/*
Enter size of array
5
Enter the elements of array
5 4 3 2 1
Before sorting: 5 4 3 2 1
After sorting: 1 2 3 4 5
*/
