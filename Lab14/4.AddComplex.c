// Add two complex numbers using structures

#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

int main()
{
    struct Complex num1, num2, sum;
    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imaginary);
    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imaginary);
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imaginary);
    return 0;
}

// OUTPUT
/*
Enter the real and imaginary parts of the first complex number:
3 4
Enter the real and imaginary parts of the second complex number:
4 3
Sum = 7.00 + 7.00i
*/
