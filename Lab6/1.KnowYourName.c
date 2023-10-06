// Usage of getchar: Ask the user whether he wants to know your name. If he types 'Y',print your name otherwise print some messages.

#include <stdio.h>
int main()
{
	printf("Do you want to know my name? Y or N\n");
	char choice = getchar();
	if (choice == 'Y')
		printf("My name is IIITDMK\n");
	else
		printf("Ok, I will not tell my name\n");
	return 0;
}

// OUTPUT
/*
Do you want to know my name? Y or N
Y
My name is IIITDMK

Do you want to know my name? Y or N
N
Ok, I will not tell my name
*/
