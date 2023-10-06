// To familiarize with the usage of %s, %wc, %ws, %[a-z], %[^\n] etc

#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("You entered: %s\n", str);

    char singleChar;
    printf("Enter a single character: ");
    scanf(" %c", &singleChar);
    printf("You entered: %c\n", singleChar);

    scanf("%*[^\n]");
    scanf("%*c");

    char lowercase[100];
    printf("Enter lowercase letters: ");
    scanf("%[a-z]", lowercase);
    printf("Lowercase letters entered: %s\n", lowercase);

    scanf("%*[^\n]");
    scanf("%*c");

    char buffer[100];
    printf("Enter a line of text: ");
    scanf("%[^\n]", buffer);
    printf("Line of text entered: %s\n", buffer);

    return 0;
}

// OUTPUT
/*
You entered: Neil
Enter a single character: C
You entered: C
Enter lowercase letters: n
Lowercase letters entered: n
Enter a line of text: Neil Chetty
Line of text entered: Neil Chetty
*/
