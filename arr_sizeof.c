/**
	Size of Array!
	ref ❤ : 
	https://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c
	https://stackoverflow.com/questions/19452971/array-size-macro-that-rejects-pointers
*/

#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

void printArray(int arr[], int size) 
{
	for (int i = 0; i < size; ++i) {
		printf("%d\n", arr[i]);
	}
}

int main(int argc, char const *argv[])
{
	int vector[5] = {1, 2, 3, 4, 5};
	printArray(vector, ARRAY_SIZE(vector));

	
	return 0;
}