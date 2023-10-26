// Perform addition of two matrices.

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the size of matrix: ");
    scanf("%d", &n);
    int arr1[n][n], arr2[n][n], sum[n][n];
    printf("Enter the elements of first matrix: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Sum of two matrices: \n");
    for (i = 0; i < n; i++)
    {
        printf("\t");
        for (j = 0; j < n; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT
/*
Enter the size of matrix: 3
Enter the elements of first matrix: 1 2 3 4 5 6 7 8 9
Enter the elements of second matrix: 1 2 3 4 5 6 7 8 9
Sum of two matrices:
        2 4 6
        8 10 12
        14 16 18
*/
