/**
	Variable Length Arrays in C
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vla(int size) {
	int arr[size];		// Variable Length Arrays in C
	for (int i = 0; i < size; ++i)
	{
		arr[i] = i * 10;
		printf("%d\n", arr[i]);		// for testing!
	}
}

int main(int argc, char const *argv[])
{
	int x = 10;

	vla(x);
	
	return 0;
}
