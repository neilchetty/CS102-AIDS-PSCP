// Demonstrate the usage of #pragma pack(1)

#include <stdio.h>
struct MyStruct
{
    char a;
    int b;
    double c;
};

#pragma pack(1)
struct PackedStruct
{
    char a;
    int b;
    double c;
};
#pragma pack()

int main()
{
    printf("Size of MyStruct: %zu bytes\n", sizeof(struct MyStruct));
    printf("Size of PackedStruct: %zu bytes\n", sizeof(struct PackedStruct));
    return 0;
}

// OUTPUT
/*
Size of MyStruct: 16 bytes
Size of PackedStruct: 13 bytes
*/
