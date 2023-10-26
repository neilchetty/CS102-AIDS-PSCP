// Sum and Avg of elements of 1D arary .

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    float avg;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("The sum of elements of array is %d\n", sum);
    printf("The average of elements of array is %f\n", avg);
    return 0;
}

// OUTPUT
/*
Enter the number of elements in array
3
Enter the elements of array
1 2 3
The sum of elements of array is 6
The average of elements of array is 2.000000
*/
