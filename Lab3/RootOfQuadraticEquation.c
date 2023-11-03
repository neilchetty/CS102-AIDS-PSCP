#include <stdio.h>
#include <math.h>

int main()
{
        float num1, num2, num3, dis;
        printf("Enter the coefficient of x^2\n");
        scanf("%f", &num1);
        printf("Enter the coefficient of x\n");
        scanf("%f", &num2);
        printf("Enter the constant\n");
        scanf("%f", &num3);
        dis = ((num2 * num2) - (4 * num1 * num3));
        if (dis < 0)
        {
                dis = dis * -1;
                printf("Roots are: %f+ i%f, %f-i%f\n", ((-num2) / (2 * num1)), ((sqrt(dis)) / (2 * num1)), ((-num2) / (2 * num1)), ((sqrt(dis)) / (2 * num1)));
                return 0;
        }
        printf("Roots are: %f, %f\n", (((-num2) + (sqrt(dis))) / (2 * num1)), (((-num2) - (sqrt(dis))) / (2 * num1)));
        return 0;
}
