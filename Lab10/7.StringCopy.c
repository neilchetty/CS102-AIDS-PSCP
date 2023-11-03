// strcpy function

#include <stdio.h>

int main()
{
	char string1[50];
	char string2[50];
	printf("Enter the string 1: \n");
	scanf("%s", string1);
	int i = 0;
	while (string1[i] != '\0')
	{
		string2[i] = string1[i];
		i++;
	}
	string2[i] = '\0';
	printf("Copied string: %s\n", string2);
	return 0;
}

// OUTPUT
/*
Enter the string 1:
neil
Copied string: neil
*/
