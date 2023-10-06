// Familiarize with character testing functions from ctype.h (atleast 10 functions)

#include <stdio.h>
#include <ctype.h>

int main()
{
    char inputChar;
    printf("Enter a character: ");
    scanf(" %c", &inputChar);
    if (isalpha(inputChar))
    {
        printf("The character is an alphabetic character.\n");
        if (isupper(inputChar))
        {
            printf("It is an uppercase letter.\n");
        }
        else if (islower(inputChar))
        {
            printf("It is a lowercase letter.\n");
        }
    }
    else if (isdigit(inputChar))
    {
        printf("The character is a digit.\n");
    }
    else if (isalnum(inputChar))
    {
        printf("The character is an alphanumeric character.\n");
    }
    else if (isblank(inputChar))
    {
        printf("The character is a blank character (space or tab).\n");
    }
    else if (isspace(inputChar))
    {
        printf("The character is a white-space character.\n");
    }
    else if (isxdigit(inputChar))
    {
        printf("The character is a hexadecimal digit.\n");
    }
    else if (ispunct(inputChar))
    {
        printf("The character is a punctuation character.\n");
    }
    else if (isprint(inputChar))
    {
        printf("The character is a printable character.\n");
    }
    else
    {
        printf("The character does not fit any of the tested categories.\n");
    }
    return 0;
}

// OUTPUT
/*
Enter a character: A
The character is an alphabetic character.
It is an uppercase letter.

Enter a character: a
The character is an alphabetic character.
It is a lowercase letter.

Enter a character: 4
The character is a digit.

Enter a character: .
The character is a punctuation character.
*/
