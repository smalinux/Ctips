#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char *names[] = {"Miller","Jones","Anderson"};
	printf("%c\n",*(*(names+1)+2));		// n
	printf("%c\n",names[1][2]);			// n
	// ===============================================================================
	// int num = 5;
	// int*ptr_num = &num;
	// printf("%d\n",*ptr_num);
	// printf("%d\n",num);
	// *(ptr_num) += 1;
	// printf("%d\n",*ptr_num);
	// printf("%d\n",num);
	// ===============================================================================
	int *pi = (int*) malloc(sizeof(int));
	*pi = 5;
	printf("*pi: %d\n", *pi);
	int x = 55;
	free(pi);
	*pi = 5;
	printf("*pi: %d\n", *pi);


	return 0;
}