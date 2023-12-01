// Dynamically allocate memory to store 10 integers and display it from that allocated location

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *array = (int *)malloc(10 * sizeof(int));
    if (array == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Return an error code
    }
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Values from dynamically allocated memory:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    free(array);
    return 0;
}

// OUTPUT
/*
Enter 10 integers:
1 2 3 4 5 6 7 8 9 10
Values from dynamically allocated memory:
1 2 3 4 5 6 7 8 9 10
*/
