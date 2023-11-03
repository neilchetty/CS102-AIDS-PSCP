#include <stdio.h>

int main()
{
        int num1, num2, num3, ans = 0;
        printf("Enter the first number\n");
        scanf("%d", &num1);
        printf("Enter the second number\n");
        scanf("%d", &num2);
        printf("Enter the third number\n");
        scanf("%d", &num3);
        if (num1 >= num2 && num1 >= num3)
                ans = num1;
        if (num2 >= num1 && num2 >= num3)
                ans = num2;
        if (num3 >= num1 && num3 >= num2)
                ans = num3;
        printf("Maximum number is: %d\n", ans);
        return 0;
}
