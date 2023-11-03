// Count and display the number of even and odd numbers in 1D array

#include <stdio.h>

int main()
{
    int n, i, even = 0, odd = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even numbers: %d\n", even);
    printf("Number of odd numbers: %d\n", odd);
    return 0;
}

// OUTPUT
/*
Enter the size of array: 3
Enter the elements of array: 1 2 3
Number of even numbers: 1
Number of odd numbers: 2
*/
