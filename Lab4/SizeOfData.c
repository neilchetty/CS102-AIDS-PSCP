#include <stdio.h>
int main()
{
	int a;
	short int b;
	long int c;
	long long int d;
	float e;
	double f;
	long double g;
	char h;
	printf("int : %lu\n", sizeof(a));
	printf("short int : %lu\n", sizeof(b));
	printf("long int : %lu\n", sizeof(c));
	printf("long long int : %lu\n", sizeof(d));
	printf("float int : %lu\n", sizeof(e));
	printf("double int : %lu\n", sizeof(f));
	printf("long double int : %lu\n", sizeof(g));
	printf("char : %lu\n", sizeof(h));
	return 0;
}
