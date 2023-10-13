// Print first n natural numbers using do while

#include <stdio.h>
int main()
{
    int n1;
    int count = 1;
    printf("Enter an integer\n");
    scanf("%d", &n1);
    do
    {
        printf("%d\n", count);
        count++;
    } while (count <= n1);
    return 0;
}

// OUTPUT
/*
Enter an integer
5
1
2
3
4
5
*/
