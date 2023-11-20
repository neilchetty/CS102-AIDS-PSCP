// Swap two numbers using (pass by value and pass by reference)

#include <stdio.h>

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping: num1 = %d, num2 = %d\n", a, b);
}

int main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    return 0;
}

// OUTPUT
/*
Enter the first number: 5
Enter the second number: 10
Before swapping: num1 = 5, num2 = 10
After swapping: num1 = 10, num2 = 5
*/
