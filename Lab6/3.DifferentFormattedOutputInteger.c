// Try different "formatted output" options (atleast 5) on any 5-digit integer  (Hint: %2d,%-6d,%0d, etc...)

#include <stdio.h>
int main()
{
    int a = 69969;
    printf("%d\n", a);
    printf("%2d\n", a);
    printf("%-6d\n", a);
    printf("%0d\n", a);
    printf("%11d\n", a);
    printf("%-9d\n", a);
    return 0;
}

// OUTPUT
/*
69969
69969
69969
69969
      69969
69969
*/
