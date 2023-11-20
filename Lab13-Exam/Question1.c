/*
Part A:

Write a C program to search for a specific element in an 2D array and display the row and column if found (use a user defined function other than main(), for searching). If not found, print  “NOT FOUND”. Assume the index starts from [0,0].

(Inputs: User enters rows and columns,

Elements and element to search)


input=3 2

1  2

4  5

7  8

5

output=1 1


input=3 3

10 20 30

40 50 60

70 80 90

55

output=NOT FOUND
*/

#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int input;
    scanf("%d", &input);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == input)
            {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }
    printf("NOT FOUND");
    return 0;
}
