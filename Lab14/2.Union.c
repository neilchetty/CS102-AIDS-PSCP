// Create a union with at least 5 members of different types and display the total memory (in Bytes) used by the union (Use sizeof()). Also display the address where the Union is stored.

#include <stdio.h>

union MyUnion
{
    int intValue;
    float floatValue;
    char charValue;
    double doubleValue;
    long longValue;
};

int main()
{
    union MyUnion myUnion;
    printf("Size of union: %zu bytes\n", sizeof(myUnion));
    printf("Address of union: %p\n", &myUnion);
    return 0;
}

// OUTPUT
/*
Size of union: 8 bytes
Address of union: 0x7ffe54d91b58
*/
