// Program to calculate y=x^n (using only loops)

#include <stdio.h>
int main()
{
    int n = 1;
    int n1;
    int n2;
    int ans = 1;
    printf("Enter the value of x for x^n :  ");
    scanf("%d", &n1);
    printf("Enter the value of n for x^n :  ");
    scanf("%d", &n2);
    while (n <= n2)
    {
        ans = ans * n1;
        n++;
    }
    printf("%d is the value of %d^%d\n", ans, n1, n2);
    return 0;
}

// OUTPUT
/*
Enter the value of x for x^n :  5
Enter the value of n for x^n :  3
125 is the value of 5^3
*/
