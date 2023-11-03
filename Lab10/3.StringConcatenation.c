#include <stdio.h>

int main()
{
	char string1[50];
	char string2[50];
	printf("Enter the string 1: \n");
	scanf("%s", string1);
	printf("Enter the string 2: \n");
	scanf("%s", string2);
	char string3[100];
	int index = 0;
	int i = 0;
	while (string1[i] != '\0')
	{
		string3[index++] = string1[i++];
	}
	i = 0;
	while (string2[i] != '\0')
	{
		string3[index++] = string2[i++];
	}
	printf("Merged String: %s\n", string3);
	return 0;
}

// OUTPUT
/*
Enter the string 1:
neil
Enter the string 2:
chetty
Merged String: neilchetty
*/
