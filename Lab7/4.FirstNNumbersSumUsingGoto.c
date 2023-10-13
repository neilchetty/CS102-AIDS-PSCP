// Sum of first n numbers using goto

#include <stdio.h>
int main()
{
    int sum = 0;
    int n1;
    int n = 0;
    printf("Write number\n");
    scanf("%d", &n1);
label_1:
    sum = sum + n;
    n++;
    if (n <= n1)
        goto label_1;
    printf("%d is the sum of first %d  natural number\n", sum, n1);
    return 0;
}

// OUTPUT
/*
Write number
5
15 is the sum of first 5  natural number
*/
