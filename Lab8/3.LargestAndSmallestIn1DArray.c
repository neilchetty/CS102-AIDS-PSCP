// Find largest and smallest element from an 1D array.

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
    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("The largest element of array is %d\n", largest);
    printf("The smallest element of array is %d\n", smallest);
    return 0;
}

// OUTPUT
/*
Enter the number of elements in array
4
Enter the elements of array
1 2 3 4
The largest element of array is 4
The smallest element of array is 1
*/
