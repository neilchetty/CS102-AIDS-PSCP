// Find two's complement of a binary number.

#include <stdio.h>
#include <string.h>

// Function to find the one's complement of a binary number
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

// Function to add 1 to a binary number
void addOne(char binary[])
{
    int carry = 1;
    for (int i = strlen(binary) - 1; i >= 0; i--)
    {
        if (binary[i] == '0' && carry == 1)
        {
            binary[i] = '1';
            carry = 0;
        }
        else if (binary[i] == '1' && carry == 1)
        {
            binary[i] = '0';
        }
    }
}

int main()
{
    char binary[32]; // Assuming a 32-bit binary number, you can change this as needed

    printf("Enter a binary number: ");
    scanf("%s", binary);

    onesComplement(binary);
    addOne(binary);

    printf("The two's complement is: %s\n", binary);

    return 0;
}

// OUTPUT
/*
Enter a binary number: 1101
The two's complement is: 0011
*/
