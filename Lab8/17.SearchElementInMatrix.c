// Search for specific element in array and display row and coloumn if found .

#include <stdio.h>

int main()
{
    int n, i, j, element, row, coloumn, flag = 0;
    printf("Enter the size of matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the elements of matrix: ");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &element);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] == element)
            {
                row = i;
                coloumn = j;
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("Element found at row %d and coloumn %d", row, coloumn);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}

// OUTPUT
/*
Enter the size of matrix: 3
Enter the elements of matrix:
1 2 3 4 5 6 7 8 9


Enter the element to be searched: 3
Element found at row 0 and coloumn 2
*/
