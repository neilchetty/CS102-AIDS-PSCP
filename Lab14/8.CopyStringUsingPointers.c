// Write a C program to copy a string to another using pointers

#include <stdio.h>

void copyString(char *source, char *destination)
{
    while (*source)
    {
        *destination++ = *source++;
    }
    *destination = '\0';
}

int main()
{
    char s[100];
    char d[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    copyString(s, d);
    printf("Copied string: %s", d);
    return 0;
}

// OUTPUT
/*
Enter a string: neil
Copied string: neil
*/
