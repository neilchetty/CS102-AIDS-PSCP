// Create a structure with at least 5 members of different types and display the total memory (in Bytes) used by the structure (Use sizeof()). Also display the address where the structure is stored.

#include <stdio.h>

struct MyStructure
{
    int integer;
    char character;
    float floatingPoint;
    double doublePrecision;
    long longInteger;
};

int main()
{
    struct MyStructure myStruct;
    printf("Size of MyStructure: %zu bytes\n", sizeof(myStruct));
    printf("Address of MyStructure: %p\n", &myStruct);
    return 0;
}

// OUTPUT
/*
Size of MyStructure: 32 bytes
Address of MyStructure: 0x7fff0fe0d920
*/
