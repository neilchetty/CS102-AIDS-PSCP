// Try different "formatted output" options (atleast 5) on any string

#include <stdio.h>

int main()
{
    char name[] = "Neil Chetty";
    printf("Name: %s\n", name);
    printf("Name: %1.1s\n", name);
    printf("Name: %3.2s\n", name);
    printf("Name: %-10.4s\n", name);
    printf("Name: %.3s\n", name);
    printf("Name: %-.3s\n", name);
    return 0;
}

// OUTPUT
/*
Name: Neil Chetty
Name: N
Name:  Ne
Name: Neil
Name: Nei
Name: Nei
*/
