// Sum of diagonal elements of a matrix using function

#include <stdio.h>

int diagonalSum(int mat[][10], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = diagonalSum(matrix, n);
    printf("\nSum of diagonal elements: %d\n", sum);
    return 0;
}

// OUTPUT
/*
Enter the size of the square matrix: 3
Enter the elements of the matrix:
1 2 3 4 5 6 7 8 9
Sum of diagonal elements: 15
*/
