#include <stdio.h>
#include <unistd.h>
int main()
{
	for (int j = 0; j < 10; j++)
	{
		printf("Hello World %d\r", j);
		fflush(stdout);
		sleep(1);
	}
	printf("\n");
	return 0;
}
