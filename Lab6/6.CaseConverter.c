// Character case conversion program (lower to upper case and vice versa) (Use getchar() and putchar())

#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("Enter the character \n");
    char input = getchar();
    input = isupper(input) ? tolower(input) : toupper(input);
    putchar(input);
    printf("\n");
    return 0;
}

// OUTPUT
/*
Enter the character
Y
y

Enter the character
a
A
*/
