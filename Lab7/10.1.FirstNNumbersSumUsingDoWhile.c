// Sum of first n numbers using do while

#include <stdio.h>
int main()
{
    int sum = 0;
    int n1;
    int n = 0;
    printf("Write number\n");
    scanf("%d", &n1);
    do
    {
        sum = sum + n;
        n++;
    } while (n <= n1);
    printf("%d is the sum of first %d  natural number\n", sum, n1);
    return 0;
}

// OUTPUT
/*
Write number
5
15 is the sum of first 5  natural number
*/
