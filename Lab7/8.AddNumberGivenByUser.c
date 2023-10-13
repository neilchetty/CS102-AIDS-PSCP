// Program to add numbers input by the user untill 0 is entered as a number

#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    do
    {
        printf("Enter an integer\n");
        scanf("%d", &n);
        sum = sum + n;
    } while (n != 0);
    printf("%d is the sum of number inputed by user\n", sum);
    return 0;
}

// OUTPUT
/*
Enter an integer
5
Enter an integer
5
Enter an integer
0
10 is the sum of number inputed by user
*/
