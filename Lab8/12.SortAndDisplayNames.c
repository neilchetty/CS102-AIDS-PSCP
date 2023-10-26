#include <stdio.h>
#include <string.h>

int main()
{
    char names[100][50];
    int num_names;

    printf("Enter the number of names to sort: ");
    scanf("%d", &num_names);

    for (int i = 0; i < num_names; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    for (int i = 0; i < num_names - 1; i++)
    {
        for (int j = 1; j < num_names - i; j++)
        {
            if (strcmp(names[j-1], names[j]) > 0)
            {
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j-1]);
                strcpy(names[j-1], temp);
            }
        }
    }

    printf("Sorted names:\n");
    for (int i = 0; i < num_names; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}

// OUTPUT
/*
Enter the number of names to sort: 3
Enter name 1: abc
Enter name 2: cdb
Enter name 3: hgd
Sorted names:
abc
cdb
hgd
*/
