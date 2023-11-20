// Insert an element to an array

#include <stdio.h>

void main()
{
    printf("Enter the number of elements \n");
    int n;
    scanf("%d", &n);
    int size = n;
    int arr[n + 1];
    printf("Enter the elements in array \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the postion of new element \n");
    int pos;
    scanf("%d", &pos);
    printf("Enter the new element \n");
    int ele;
    scanf("%d", &ele);
    while (n > pos)
    {
        arr[n] = arr[n - 1];
        n--;
    }
    arr[pos] = ele;
    printf("New Array \n");
    for (int i = 0; i <= size; i++)
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
Enter the postion of new element
3
Enter the new element
8
New Array
5 4 3 8 2 1
*/
