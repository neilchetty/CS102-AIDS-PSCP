// Delete an element from an array

#include <stdio.h>

void main()
{
    printf("Enter the number of elements \n");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in array \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the postion of element to delete\n");
    int pos;
    scanf("%d", &pos);
    while (pos < n - 1)
    {
        arr[pos] = arr[pos + 1];
        pos++;
    }
    printf("New Array \n");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}

// OUTPUT
/*
Enter the number of elements
5
Enter the elements in array
5 4 3 2 1
Enter the postion of element to delete
3
New Array
5 4 3 1
*/
