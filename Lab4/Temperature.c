#include<stdio.h>
int main() {
	float input;
	int choice;
        printf("Choice 1: Degree Celsisus to Degree Frahaneit\n");
        printf("Choice 2: Degree Frahaneit to Degree Celsisus\n");
	scanf("%d", &choice);
	if(choice==1) {
		printf("Enter temperature in celsisus scale: ");
		scanf("%f", &input);
		printf("temperature in farahneit scale: %f\n", ((input*9)/5)+32);
	}
	else {
                printf("Enter temperature in faharaneit scale: ");
                scanf("%f", &input);
                printf("temperature in celsius scale: %f\n", (((input-32)*5)/9));
	}
	return 0;
}
