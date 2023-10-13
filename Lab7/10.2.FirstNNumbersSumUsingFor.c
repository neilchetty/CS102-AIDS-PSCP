// Sum of first n numbers using for

#include <stdio.h>
int main()
{
    int sum = 0;
    int n1;
    printf("Write number\n");
    scanf("%d", &n1);
    for (int n = 1; n <= n1; n++)
    {
        sum = sum + n;
    }
    printf("%d is the sum of first %d  natural number\n", sum, n1);
    return 0;
}

// OUTPUT
/*
Write number
5
15 is the sum of first 5  natural number
*/
