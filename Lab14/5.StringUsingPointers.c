// Write a C program to print a string using pointers

#include <stdio.h>

void printString(char *str)
{
    while (*str != '\0')
    {
        printf("%c", *str);
        str++;
    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    printString(str);
    return 0;
}

// OUTPUT
/*
Enter the string: neil
neil
*/
