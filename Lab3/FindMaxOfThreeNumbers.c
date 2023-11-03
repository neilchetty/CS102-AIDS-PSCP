#include <stdio.h>
#include <limits.h>

int main()
{
        int num1, num2, num3, ans = INT_MIN;
        printf("Enter the first number\n");
        scanf("%d", &num1);
        printf("Enter the second number\n");
        scanf("%d", &num2);
        printf("Enter the third number\n");
        scanf("%d", &num3);
        if (num1 > ans)
                ans = num1;
        if (num2 > ans)
                ans = num2;
        if (num3 > ans)
                ans = num3;
        printf("Maximum number is: %d\n", ans);
        return 0;
}
