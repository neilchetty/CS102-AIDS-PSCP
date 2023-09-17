#include<stdio.h>
#define PI 3.14

int main() {
        int num1;
        printf("Enter the radius\n");
        scanf("%d", &num1);
	printf("%f\n", PI*num1*num1);
	return 0;
}
