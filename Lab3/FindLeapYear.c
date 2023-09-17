#include<stdio.h>

int main() {
        int num1;
        printf("Enter the year\n");
        scanf("%d", &num1);
	if(num1%400==0 || num1%100==0 || num1%4==0) printf("It is a leap year");
	else printf("It is not a leap year\n");
	return 0;
}
