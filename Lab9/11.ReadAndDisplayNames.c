// Read a list of names and display it

#include <stdio.h>

int main()
{
    char names[10][50];
    int i, n;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    printf("The names are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}

// OUTPUT
/*
Enter the number of names: 5
Enter 5 names:
neil
neil
neil
neil
neil
The names are:
neil
neil
neil
neil
neil
*/
