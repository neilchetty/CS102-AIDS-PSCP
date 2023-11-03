#include <stdio.h>
int main()
{
	char arr[] = {'a', 'e', 'i', 'o', 'u', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', ' '};
	for (int i = 0; i < sizeof(arr); i++)
	{
		printf("ASCII Value Of %c is %d\n", arr[i], arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		printf("ASCII Value Of %d is %d\n", i, i + '0');
	}
	return 0;
}
