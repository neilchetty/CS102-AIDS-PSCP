// Program to create a structure Dependent inside another structure Employee (with name and age as members inside both structures) for 3 Employees in a Company. And display each employee name along with his/her dependent name.

#include <stdio.h>
struct Dependent
{
    char name[50];
    int age;
};

struct Employee
{
    char name[50];
    int age;
    struct Dependent dependent;
};

int main()
{
    struct Employee employees[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Dependent Name: ");
        scanf("%s", employees[i].dependent.name);
        printf("Dependent Age: ");
        scanf("%d", &employees[i].dependent.age);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d: %s\n", i + 1, employees[i].name);
        printf("Dependent Name: %s\n", employees[i].dependent.name);
        printf("\n");
    }
    return 0;
}

// OUTPUT
/*
Enter details for Employee 1:
Name: aa
Age: 12
Dependent Name: aaa
Dependent Age: 5
Enter details for Employee 2:
Name: sss
Age: 12
Dependent Name: dffff44
Dependent Age: 44
Enter details for Employee 3:
Name: dfdfdf
Age: 34
Dependent Name: fvdfvdfv
Dependent Age: 23
Employee 1: aa
Dependent Name: aaa

Employee 2: sss
Dependent Name: dffff44

Employee 3: dfdfdf
Dependent Name: fvdfvdfv
*/
