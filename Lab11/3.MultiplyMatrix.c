// Matrix multiplication

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int a[n][n], b[n][n], c[n][n];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplying matrices
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Displaying the result
    printf("Resultant matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// OUTPUT
/*
Enter the size of the square matrix: 3
Enter the elements of the first matrix:
1 2 3 4 5 6
1 2 3
Enter the elements of the second matrix:
1 2 3 4 5 6
1 2 3
Resultant matrix:
12 18 24
30 45 60
12 18 24
*/
