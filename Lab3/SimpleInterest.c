#include <stdio.h>

int main()
{
        int principle, interest, time;
        printf("Enter the principle amount\n");
        scanf("%d", &principle);
        printf("Enter the rate of interest\n");
        scanf("%d", &interest);
        printf("Enter the time\n");
        scanf("%d", &time);
        printf("Interest is: %d\n", (principle * time * interest / 100));
        return 0;
}
