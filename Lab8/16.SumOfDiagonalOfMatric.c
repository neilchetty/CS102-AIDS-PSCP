// Sum of diagonal elements in a square matrix.

#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
            {
                sum += a[i][j];
            }
        }
    }
    printf("The sum of diagonal elements is %d\n", sum);
    return 0;
}

// OUTPUT
/*
Enter the size of the square matrix: 3
Enter the elements of the matrix:
1 2 3 4 5 6 7 8 9
The sum of diagonal elements is 15
*/
