// Find one's complement of binary  number

#include <stdio.h>
#include <string.h>

void onesComplement(char binary[])
{
    for (int i = 0; i < strlen(binary); i++)
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
        }
        else if (binary[i] == '1')
        {
            binary[i] = '0';
        }
    }
}

int main()
{
    char binary[32];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    onesComplement(binary);

    printf("The one's complement is: %s\n", binary);

    return 0;
}

// OUTPUT
/*
Enter a binary number: 1101
The one's complement is: 0010
*/
