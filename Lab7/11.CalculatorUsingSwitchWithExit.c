// Calculator using switch construct (include an option Exit for the user and use exit(0) function to exit from the program if User selects the option Exit)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    while (true)
    {
        double n1, n2;
        char o;
        printf("Enter first  number\n");
        scanf("%lf", &n1);
        printf("Enter second  number\n");
        scanf("%lf%*c", &n2);
        printf("Enter an operator(+,-,*,/)\n");
        printf("Enter ! if you want to cancel the program\n");
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
        case '!':
            exit(0);
        default:
            printf("Invalid operator or press ! for exit");
        }
    }
    return 0;
}

// OUTPUT
/*
Enter first  number
4
Enter second  number
5
Enter an operator(+,-,*,/)
Enter ! if you want to cancel the program
*
4.000000*5.000000=20.000000
Enter first  number
4
Enter second  number
5
Enter an operator(+,-,*,/)
Enter ! if you want to cancel the program
!
*/
