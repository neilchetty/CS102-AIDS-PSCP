// Write a C program to print the length of a string using pointers

#include <stdio.h>

int lengthString(char *str)
{
    int length = 0;
    while (*str++ != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    printf("Length Of String: %d", lengthString(str));
    return 0;
}

// OUTPUT
/*
Enter the string: neil
Length Of String: 4
*/
