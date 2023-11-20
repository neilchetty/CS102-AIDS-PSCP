// Largest element from an array using functions

#include <stdio.h>
int helper(int arr[], int n);

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
    printf("The largest element of array is %d\n", helper(arr, n));
    return 0;
}

int helper(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

// OUTPUT
/*
Enter the number of elements in array
5
Enter the elements of array
5 4 3 2 1
The largest element of array is 5
*/
