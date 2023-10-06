// Try different "formatted output" options (atleast 8; default and exponential notation) on any floating point number

#include <stdio.h>
int main()
{
    float x = 634.9757;
    printf("%f\n", x);
    printf("%e\n", x);
    printf("%3.2e\n", x);
    printf("%2.3e\n", x);
    printf("%1.8e\n", x);
    printf("%.2e\n", x);
    printf("%.4e\n", x);
    printf("%.6e\n", x);
    printf("%.8e\n", x);
    return 0;
}

// OUTPUT
/*
634.975708
6.349757e+02
6.35e+02
6.350e+02
6.34975708e+02
6.35e+02
6.3498e+02
6.349757e+02
6.34975708e+02
*/
