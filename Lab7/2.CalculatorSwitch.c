// Calculator using switch construct

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
    switch (o)
    {
    case '+':
        printf("%lf+%lf=%lf\n", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%lf-%lf=%lf\n", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%lf*%lf=%lf\n", n1, n2, n1 * n2);
        break;
    case '/':
        if (n2 != 0)
            printf("%lf/%lf=%lf\n", n1, n2, n1 / n2);
        else
            printf("Division not possible\n");
    default:
        printf("Invalid operator");
    }
    return 0;
}

// OUTPUT
/*
Enter first  number
3
Enter second  number
4
Enter an operator(+,-,*,/)
+
3.000000+4.000000=7.000000
*/
