headers= 

all:
# 	touch main.c
	# 	Start Uaucp book ▼
	gcc test.c -o test $(headers) -std=c99
	# Array =========================================================
	gcc ptr_1.c -o ptr_1 $(headers) -std=c99
	gcc ptr_struct.c -o ptr_struct $(headers) -std=c99
	gcc ptr_array_1.c -o ptr_array_1 $(headers) -std=c99
	gcc ptr_array_2.c -o ptr_array_2 $(headers) -std=c99
	gcc ptr_array_notations.c -o ptr_array_notations $(headers) -std=c99
	gcc ptr_vla.c -o ptr_vla $(headers) -std=c99
	# Array =========================================================
	gcc arr_sizeof.c -o arr_sizeof $(headers) -std=c99
	gcc arr_of_ptr.c -o arr_of_ptr $(headers) -std=c99
	# 	End Uaucp book ▲

clean:
	rm *.o