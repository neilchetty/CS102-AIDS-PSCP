#include <stdio.h>

int main()
{
        int num1, num2;
        printf("Enter the first number\n");
        scanf("%d", &num1);
        printf("Enter the second number\n");
        scanf("%d", &num2);
        if (num1 > num2)
                printf("Maximum is: %d", num1);
        else if (num2 > num1)
                printf("Maximum is: %d", num2);
        else
                printf("Both numbers are equal and value is: %d", num1);
        return 0;
}
