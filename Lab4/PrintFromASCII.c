#include<stdio.h>
int main() {
	int arr[] = {101,97,87,89,69};
	for(int i=0;i<sizeof(arr);i++) {
		printf("%c ", arr[i]);
	}
	printf("\n");
	return 0;
}
