/**
	Array name = pointer + block size
	**********   *******   **********
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_SIZE 5

int main(int argc, char const *argv[])
{


	int vector[ARR_SIZE];

	printf("%ld\n", sizeof(vector)/sizeof(int)); 		// 5
	
	return 0;
}
