// strcmp function

#include <stdio.h>
int helperFunction(char *string1, char *string2, int index);

int main()
{
	char string1[50], string2[50];
	printf("Enter the string 1: \n");
	scanf("%s", string1);
	printf("Enter the string 2: \n");
	scanf("%s", string2);
	switch (helperFunction(string1, string2, 0))
	{
	case -1:
		printf("String 1 is less than string 2\n");
		break;
	case 0:
		printf("String 1 is equal to string 2\n");
		break;
	case 1:
		printf("String 1 is greater than string 2\n");
		break;
	}
	return 0;
}

int helperFunction(char *string1, char *string2, int index)
{
	if (string1[index] == '\0' && string2[index] == '\0')
		return 0;
	else if ((int)string1[index] < (int)string2[index])
		return -1;
	else if ((int)string1[index] > (int)string2[index])
		return 1;
	return helperFunction(string1, string2, index + 1);
}

// OUTPUT
/*
Enter the string 1:
neil
Enter the string 2:
z
String 1 is less than string 2
*/
