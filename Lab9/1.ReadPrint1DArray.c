// Read and print 1D array.

#include <stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements in array\n");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements of array\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("The elements of array are\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

// OUTPUT
/*
Enter the number of elements in array
3
Enter the elements of array
1 2 3
The elements of array are
1 2 3
*/
