// Implement a multifile program

#include <stdio.h>

int main()
{
    extern int file1;
    printf("%d \n", file1);
    file2Fn();
}

// OUTPUT
/*
5
10
*/
