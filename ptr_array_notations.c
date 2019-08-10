/**
	


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

	int vector[5] = {1, 2, 3, 4, 5};
 	int *pv;
 	
 	pv = vector;
 	
 	//________________________________
	printf("%p\n", vector +0 ); // dereferencing: *(vector + 0)
	printf("%p\n", pv +0 ); 		// dereferencing: ---
	

	printf("%p\n", &vector[0] ); // dereferencing: vector[0]
	printf("%p\n", &pv[0] );		// dereferencing: ---


	pv = vector;
	int value = 10;
	for(int i=0; i<5; i++) {
		*pv++ *= value;
	}

	for(int i=0; i<5; i++) {
		printf("%d\n", vector[i]);
	}

	
	return 0;
}
