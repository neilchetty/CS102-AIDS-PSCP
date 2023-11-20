// Use structure concept to represent two points in 2D plane, read the values through keyboard  and calculate the distance between them

#include <stdio.h>
#include <math.h>

struct Point
{
    float x;
    float y;
};

int main()
{
    struct Point p1, p2;

    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%f %f", &p2.x, &p2.y);
    float distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    printf("The distance between the two points is: %.2f\n", distance);
    return 0;
}

// OUTPUT
/*
Enter the coordinates of the first point (x1 y1): 2 3
Enter the coordinates of the second point (x2 y2): 4 6
The distance between the two points is: 3.61
*/
