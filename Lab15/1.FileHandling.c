// Program to demonstrate all High level file handling functions in C (You can do this as a single program or as multiple programs) This question will be evaluated in today's lab itself after 40 minutes from the commencement of lab.

#include <stdio.h>

int main()
{
    FILE *input;
    FILE *output;
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "wb");
    if (input == NULL || output == NULL)
    {
        printf("Error opening file\n");
        return 0;
    }
    printf("Single Character: %c\n", getc(input));
    putc('a', output);
    fprintf(output, "Hello ");
    char a[20];
    fscanf(input, "%s", a);
    printf("Read String: %s\n", a);
    printf("Position Input: %ld\n", ftell(input));
    fseek(input, 0L, 0);
    printf("Position Input after fseek: %ld\n", ftell(input));
    rewind(input);
    printf("Position Input after rewind: %ld\n", ftell(input));
    printf("Position Output: %ld\n", ftell(output));
    fclose(input);
    fclose(output);
    return 0;
}

// OUTPUT
/*
Single Character: a
Read String: bc
Position Input: 3
Position Input after fseek: 0
Position Input after rewind: 0
Position Output: 7
*/
