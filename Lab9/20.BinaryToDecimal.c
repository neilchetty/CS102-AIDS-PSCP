// Binary to decimal conversion.

#include <stdio.h>
#include <math.h>
int main()
{
    int binary, decimal = 0, remainder, count = 0;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary != 0)
    {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, count);
        count++;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

// OUTPUT
/*
Enter a binary number: 1101
Decimal equivalent: 13
*/
