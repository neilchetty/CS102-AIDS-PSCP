// Find largest and smallest element from an 2D array.

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
        printf("Enter the elements of row %d\n", i + 1);
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int largest = arr[0][0], smallest = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            }
        }
    }
    printf("The largest element of array is %d\n", largest);
    printf("The smallest element of array is %d\n", smallest);
    return 0;
}

// OUTPUT
/*
Enter the number of rows and columns in array
2 3
Enter the elements of array
Enter the elements of row 1
1 2 3 4 5 6
Enter the elements of row 2
The largest element of array is 6
The smallest element of array is 1
*/
