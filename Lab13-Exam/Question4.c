/*
Write a C program to find the sum of digits of a given number and if the sum is divisible by three, check whether the last two digits (i. e, unit and tens place) are divisible by 4. If both conditions satisfy, then print Given number is divisible by 12 (Note: Do divisibility test after calculating sum of digits, otherwise you will get zero marks. Use a user defined function other than main() to calculate sum of digits)


input=13

output=NOT DIVISIBLE


input=24

output=DIVISIBLE
*/

#include <stdio.h>
int sumOfDigits(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    if (ans % 3 == 0)
        return 1;
    else
        return 0;
}

int lastTwoDigits(int n)
{
    int ans = 0;
    int count = 2;
    while (n > 0 && count > 0)
    {
        ans = ans * 10 + n % 10;
        n /= 10;
        count--;
    }
    int lastTwo = 0;
    while (ans > 0)
    {
        lastTwo = lastTwo * 10 + ans % 10;
        ans /= 10;
    }
    if (lastTwo % 4 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (sumOfDigits(n) == 1 && lastTwoDigits(n) == 1)
        printf("DIVISIBLE");
    else
        printf("NOT DIVISIBLE");
    return 0;
}
