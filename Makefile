headers= 

all:
# 	touch main.c
	gcc ptr_1.c -o ptr_1 $(headers) -std=c99
	gcc ptr_struct.c -o ptr_struct $(headers) -std=c99
# 	gcc main.c -o main $(headers) -std=c99
# 	gcc main.c -o main $(headers) -std=c99
# 	gcc main.c -o main $(headers) -std=c99
# 	./main

clean:
	rm *.o