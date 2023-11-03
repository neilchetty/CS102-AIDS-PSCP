//  C program for multiplication table  of  any number.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number whose multiplication table you want\n");
    scanf("%d", &n);
    printf("The multiplication table of %d is\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}

// OUTPUT
/*
Enter the number whose multiplication table you want
5
The multiplication table of 5 is
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
*/
