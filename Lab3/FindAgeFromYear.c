#include <stdio.h>

int main()
{
	int num1, num2, num3;
	printf("Enter the year\n");
	scanf("%d", &num1);
	printf("Enter the month\n");
	scanf("%d", &num2);
	printf("Enter the date\n");
	scanf("%d", &num3);
	int year = 2023 - num1;
	int month = 9 - num2;
	int days = 22 - num3;
	if (month < 0)
	{
		year--;
		month = 12 - num2 + 9;
	}
	if (days < 0)
	{
		month--;
		days = 30 - num3 + 22;
	}
	printf("Age is: %d Year, %d Month, %d Days\n", year, month, days);
	return 0;
}
