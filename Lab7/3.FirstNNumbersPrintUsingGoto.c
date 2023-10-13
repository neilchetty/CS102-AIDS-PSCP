// Print first n natural numbers using goto

#include <stdio.h>
int main()
{
    int n1;
    int count = 1;
    printf("Enter an integer\n");
    scanf("%d", &n1);
label_1:
    printf("%d\n", count);
    count++;
    if (count <= n1)
        goto label_1;
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
