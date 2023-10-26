// Sum and Avg of all elements of 2D arary.

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
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    float avg;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    avg = (float)sum / (n * m);
    printf("The sum of elements of array is %d\n", sum);
    printf("The average of elements of array is %f\n", avg);
    return 0;
}

// OUTPUT
/*
Enter the number of rows and columns in array
2 3
Enter the elements of array
1 2 3 4 5 6
The sum of elements of array is 16
The average of elements of array is 2.666667
*/
