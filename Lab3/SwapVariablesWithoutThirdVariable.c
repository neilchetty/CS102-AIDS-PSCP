#include <stdio.h>

int main()
{
        int num1, num2;
        printf("Enter the first number\n");
        scanf("%d", &num1);
        printf("Enter the second number\n");
        scanf("%d", &num2);
        printf("First Number: %d, Second Number: %d\n", num1, num2);
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
        printf("First Number: %d, Second Number: %d\n", num1, num2);
        return 0;
}
