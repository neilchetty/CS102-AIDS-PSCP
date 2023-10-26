// Transpose of a matrix.

#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter the number of rows and columns in array\n");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The transpose of the matrix is\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT
/*
Enter the number of rows and columns in array
2 3
Enter the elements of array
1 2 3 4 5 6
The transpose of the matrix is
1 4
2 5
3 6
*/
