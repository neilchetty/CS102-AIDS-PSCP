#include <stdio.h>

int main()
{
        int num1;
        printf("Enter the first number\n");
        scanf("%d", &num1);
        if (num1 % 2 == 0)
                printf("It is even\n");
        else
                printf("It is odd\n");
        return 0;
}
