// Calculate the square of a number using pointer to function concept

#include <stdio.h>

void helper(int *a)
{
    printf("Square is %d\n", (*a) * (*a));
}
int main()
{
    int a;
    printf("Enter then number\n");
    scanf("%d", &a);
    helper(&a);
}

// OUTPUT
/*
Enter then number
45
Square is 2025
*/
