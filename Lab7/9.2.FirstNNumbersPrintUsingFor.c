// Print first n natural numbers using for

#include <stdio.h>
int main()
{
    int n1;
    printf("Enter an integer\n");
    scanf("%d", &n1);
    for (int count = 1; count <= n1; count++)
        printf("%d\n", count);
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
