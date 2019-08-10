/**
Check el array boundaries before any thing
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_SIZE 5

int main(int argc, char const *argv[])
{


	int arr[ARR_SIZE];

	// inset
	if (&arr[5] <= arr && &arr[5] >= arr+ARR_SIZE) // Check el boundaries first
		// el C lang will leave you make mistakes
	{
		arr[5] = 55;
	}

	// access
	printf("%d\n", arr[5]);
	
	return 0;
}
