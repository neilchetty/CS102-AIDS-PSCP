/*
Write a C program to find Largest element from a float type array (Use a user defined function other than main(), for largest element calculation).

(Inputs: User the number of elements and then

Elements of the array)



input= 5

0.6 1.9 0.2 1.5 1.2

output=1.9


input= 3

5.6 7.8 6.0

output=7.8
*/

#include <stdio.h>
float calculate(float arr[], int m)
{
    float max = arr[0];
    for (int i = 0; i < m; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int m;
    scanf("%d", &m);
    float arr[m];
    for (int i = 0; i < m; i++)
        scanf("%f", &arr[i]);
    printf("%0.1f", calculate(arr, m));
    return 0;
}
