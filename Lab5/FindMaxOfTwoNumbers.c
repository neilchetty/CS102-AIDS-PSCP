#include <stdio.h>

int main()
{
        int num1, num2, ans = 0;
        printf("Enter the first number\n");
        scanf("%d", &num1);
        printf("Enter the second number\n");
        scanf("%d", &num2);
        ans = (num1 >= num2) ? num1 : num2;
        printf("Max value is: %d", ans);
        return 0;
}
