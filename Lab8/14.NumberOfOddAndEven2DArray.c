//  Count and display the number of even and odd numbers in 2D array.

#include <stdio.h>

int main()
{
    int rows, cols, i, j, even_count = 0, odd_count = 0;

    printf("Enter the number of rows and columns of the array: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter the elements of the array:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);

            if (arr[i][j] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }
    }

    printf("\nNumber of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);

    return 0;
}

// OUTPUT
/*
Enter the number of rows and columns of the array: 2 3
Enter the elements of the array:
1 2 3 4 5 6

Number of even elements: 3
Number of odd elements: 3
*/
