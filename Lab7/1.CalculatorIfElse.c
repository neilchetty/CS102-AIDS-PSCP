// Program to implement calculator using else-if ladder.

#include <stdio.h>
int main()
{
    double n1, n2;
    char o;
    printf("Enter first  number\n");
    scanf("%lf", &n1);
    printf("Enter second  number\n");
    scanf("%lf%*c", &n2);
    printf("Enter an operator(+,-,*,/)\n");
    scanf("%c", &o);
    if (o == '+')
        printf("%lf+%lf=%lf\n", n1, n2, n1 + n2);
    else if (0 == '-')
        printf("%lf-%lf=%lf\n", n1, n2, n1 - n2);
    else if (o == '*')
        printf("%lf*%lf=%lf\n", n1, n2, n1 * n2);
    else if (o == '/')
    {
        if (n2 != 0)
            printf("%lf/%lf=%lf\n", n1, n2, n1 / n2);
        else
            printf("Divison is not possible");
    }
    else
    {
        printf("Invalid operator");
    }
    return 0;
}

// OUTPUT
/*
Enter first  number
5
Enter second  number
3
Enter an operator(+,-,*,/)
+
5.000000+3.000000=8.000000
*/
