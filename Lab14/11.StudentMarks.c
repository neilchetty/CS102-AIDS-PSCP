// Program to enter the marks of three courses of 10 students along with their name and roll no. Calculate the course wise average marks and display the students with highest and lowest (total) marks.

#include <stdio.h>
struct Student
{
    char name[50];
    int rollNo;
    int marks[3];
    int totalMarks;
};

void calculateAverageMarks(struct Student students[])
{
    int courseTotal[3] = {0};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            courseTotal[j] += students[i].marks[j];
        }
    }
    printf("Course-wise average marks:\n");
    for (int i = 0; i < 3; i++)
    {
        float average = (float)courseTotal[i] / 10;
        printf("Course %d: %.2f\n", i + 1, average);
    }
}

void findHighestAndLowestMarks(struct Student students[])
{
    int highestMarks = students[0].totalMarks;
    int lowestMarks = students[0].totalMarks;
    int highestIndex = 0;
    int lowestIndex = 0;
    for (int i = 1; i < 10; i++)
    {
        if (students[i].totalMarks > highestMarks)
        {
            highestMarks = students[i].totalMarks;
            highestIndex = i;
        }
        if (students[i].totalMarks < lowestMarks)
        {
            lowestMarks = students[i].totalMarks;
            lowestIndex = i;
        }
    }

    printf("Student with highest marks:\n");
    printf("Name: %s\n", students[highestIndex].name);
    printf("Roll No: %d\n", students[highestIndex].rollNo);
    printf("Total Marks: %d\n", students[highestIndex].totalMarks);
    printf("Student with lowest marks:\n");
    printf("Name: %s\n", students[lowestIndex].name);
    printf("Roll No: %d\n", students[lowestIndex].rollNo);
    printf("Total Marks: %d\n", students[lowestIndex].totalMarks);
}

int main()
{
    struct Student students[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Enter marks for each course:\n");
        for (int j = 0; j < 3; j++)
        {
            printf("Course %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].totalMarks += students[i].marks[j];
        }
    }
    calculateAverageMarks(students);
    findHighestAndLowestMarks(students);
    return 0;
}

// OUTPUT
/*
Too Much To Enter
*/
