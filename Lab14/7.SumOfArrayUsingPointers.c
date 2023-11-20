// Write a C program to print sum of elements of an array using pointers

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int sum = 0, index = 0, *ptr = arr;
    while (index++ < n)
        sum += *ptr++;
    printf("Sum is: %d\n", sum);
    return 0;
}

// OUTPUT
/*
Enter the size of array
5
Enter the array elements
5 4 2 3 1
Sum is: 15
*/
