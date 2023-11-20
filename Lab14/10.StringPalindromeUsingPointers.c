// Write a C program to check whether a string is palindrome or not  string using pointers

#include <stdio.h>
#include <string.h>

int isPalindrome(char *str)
{
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    while (start < end)
    {
        if (*start++ != *end--)
            return 0;
    }
    return 1;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str))
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}

// OUTPUT
/*
Enter a string: aba
aba is a palindrome.
*/
