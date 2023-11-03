// strlen function

#include <stdio.h>

int main()
{
	char string1[50];
	char string2[50];
	printf("Enter the string 1: \n");
	scanf("%s", string1);
	printf("Enter the string 2: \n");
	scanf("%s", string2);
	int sizeS1 = 0;
	int sizeS2 = 0;
	int i = 0;
	while (string1[i] != '\0')
	{
		sizeS1++;
		i++;
	}
	i = 0;
	while (string2[i] != '\0')
	{
		sizeS2++;
		i++;
	}
	printf("Length of string 1 : %d , Length of string 2: %d\n", sizeS1, sizeS2);
	return 0;
}

// OUTPUT
/*
Enter the string 1:
neil
Enter the string 2:
chetty
Length of string 1 : 4 , Length of string 2: 6
*/
