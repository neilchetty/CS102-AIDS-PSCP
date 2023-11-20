// IIITDM Kurnool has 25 first year students and they have appeared for the Problem Solving and Computer Programming minor 1 exam. Management of the institute would like to give the best student award for the first and second rank students. Write a program to print the roll numbers and marks of the first rank and second rank students. Implement this program using structures.

#include <stdio.h>

struct Student
{
    int rollNumber;
    float marks;
};

int main()
{
    int numStudents = 25;
    struct Student students[numStudents];
    for (int i = 0; i < numStudents; i++)
    {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &students[i].rollNumber);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }
    for (int i = 0; i < numStudents; i++)
    {
        for (int j = 0; j < numStudents - i - 1; j++)
        {
            if (students[j].marks < students[j + 1].marks)
            {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("First Rank Student:\n");
    printf("Roll Number: %d\n", students[0].rollNumber);
    printf("Marks: %.2f\n", students[0].marks);
    printf("Second Rank Student:\n");
    printf("Roll Number: %d\n", students[1].rollNumber);
    printf("Marks: %.2f\n", students[1].marks);
    return 0;
}

// OUTPUT
/*
Not possible , since 25 students are there. But it will work.
*/
