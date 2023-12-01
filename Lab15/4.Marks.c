// Read the name and PSCP marks of five of your friends, store it in a file named pscp_marks.txt and display the contents of that file. (will be evaluated in the lab itself)

#include <stdio.h>

void saveData(FILE *output, char *name, int m1)
{
    fprintf(output, "%s|%d\n", name, m1);
}

void readData(FILE *input)
{
    for (int i = 0; i < 5; i++)
    {
        char name[20];
        int m1;
        fscanf(input, "%[^|]|%d\n", name, &m1);
        printf("Name: %s, Marks Is: %d\n", name, m1);
    }
}

int main()
{
    FILE *input;
    input = fopen("marks.txt", "w");
    for (int i = 0; i < 5; i++)
    {
        char name[20];
        int m1;
        printf("Enter the name: \n");
        scanf("%s", name);
        printf("Enter the marks: \n");
        scanf(" %d", &m1);
        saveData(input, name, m1);
    }
    fclose(input);
    input = fopen("marks.txt", "r");
    readData(input);
    fclose(input);
}

// OUTPUT
/*
Enter the name:
Neil
Enter the marks:
100
Enter the name:
Neil
Enter the marks:
99
Enter the name:
Neil
Enter the marks:
98
Enter the name:
Neil
Enter the marks:
97
Enter the name:
Neil
Enter the marks:
96
Name: Neil, Marks Is: 100
Name: Neil, Marks Is: 99
Name: Neil, Marks Is: 98
Name: Neil, Marks Is: 97
Name: Neil, Marks Is: 96
*/
