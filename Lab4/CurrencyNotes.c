#include<stdio.h>
int main() {
	int arr[] = {100,50,10,5,2,1};
	int input,i=0,notes=0;
	printf("Enter the amount\n");
	scanf("%d", &input);
	while(input>0) {
		if(arr[i]>input) {
			i++;
			continue;
		}
		notes++;
		input -= arr[i];
	}
	printf("Minimum number of notes: %d\n", notes);
	return 0;
}
