#include <stdio.h>

// Function to find the count of
// positive integers in an array
int Positive(int* arr, int n)
{
	int a = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] > 0)
			a++;
	}
	return a;
}

// Function to find the count of
// negative integers in an array
/*int countNegativeNumbers(int* arr, int n)
{
	int neg_count = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] < 0)
			neg_count++;
	}
	return neg_count;
}*/

// Function to print the array
void printArray(int* arr, int n)
{
	int i;

	printf("Array: ");
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// Driver program
int main()
{
	int arr[] = { 2, -1, 5, 6, 0, -3 ,9,5,4};
	int n;
	n = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, n);

	printf("Count of Positive elements = %d\n",
		Positive(arr, n));
	//printf("Count of Negative elements = %d\n",
		//countNegativeNumbers(arr, n));

	return 0;
}
