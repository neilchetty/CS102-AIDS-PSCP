// Decimal to binary conversion.

#include <stdio.h>
#include <stdio.h>

int main()
{
    int decimal, rem;
    long long base = 1;
    long long binary = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0)
    {
        rem = decimal % 2;
        binary += rem * base;
        decimal /= 2;
        base *= 10;
    }

    printf("Binary equivalent: %lld\n", binary);

    return 0;
}

// OUTPUT
/*
Enter a decimal number: 34
Binary equivalent: 100010
*/
