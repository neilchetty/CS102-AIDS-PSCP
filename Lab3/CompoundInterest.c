#include <stdio.h>
#include <math.h>
int main()
{
        float principle, interest, time;
        printf("Enter the principle amount\n");
        scanf("%f", &principle);
        printf("Enter the rate of interest\n");
        scanf("%f", &interest);
        printf("Enter the time\n");
        scanf("%f", &time);
        float ans = ((principle) * (pow((1 + (interest / 100)), time)));
        printf("Interest is: %f\n", ans - principle);
        return 0;
}
