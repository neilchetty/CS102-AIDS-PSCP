/*
If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides. (Use a user defined function other than main() to check the validity)

(Inputs: User enters three sides of triangle)


input= 8 15 25

output=NOT VALID


input= 10 12 30

output=NOT VALID
*/

#include <stdio.h>
int maxSide(int x, int y, int z)
{
    int max = x;
    if (y > max)
        max = y;
    if (z > max)
        max = z;
    return max;
}

int solve(int x, int y, int z, int max)
{
    if ((x + y < max) || (y + z < max) || (x + z < max))
        return 0;
    return 1;
}

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (solve(x, y, z, maxSide(x, y, z)) == 1)
        printf("VALID");
    else
        printf("NOT VALID");
    return 0;
}
