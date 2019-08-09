/**
> Ideal example for Struct with pointers
- 
- Richard Reese book (uaucp) have a great figures
- NOTE : this is a very basic example to handle single node of Person struct \n
  but if you need larger DS like a list of Person, in this case you should use \n
  Linked List DS, Array of ptrPerson, Make your own custom list ...
- uaucp book have nice example for: Arrays of structures >> search for "void initializeList()"
========================================= */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #pragma pack(1) // Disable padding

typedef struct _person {
	unsigned int age;
	char* firstName;
	char* lastName;
	char* title;
} Person;


void processPerson();
void initializePerson(Person *person, const char* fn, const char* ln, const char* title, int age);
void printPerson(Person *person);
void deallocatePerson(Person *person);



// ==========================================================================
int main(int argc, char const *argv[])
{

	processPerson(); // El master func ...

	// printf("Size of Person %ld\n", sizeof(Person));	//  Struct Padding

	return 0;
}
// ==========================================================================



/** El master func
	- alloc ptrPerson
	- initializePerson
	- deallocatePerson
	- free ptrPerson
*/
void processPerson()
{
	Person *ptrPerson;
	ptrPerson = (Person*) malloc(sizeof(Person));

	initializePerson(ptrPerson, "Peter", "Underwood", "Manager", 36);
	// ...

	printPerson(ptrPerson);

	// ...
	deallocatePerson(ptrPerson);
	free(ptrPerson);
}

void initializePerson(Person *person, const char* fn, const char* ln, const char* title, int age)
{
	person->firstName = (char*) malloc(strlen(fn) + 1);
	strcpy(person->firstName, fn);
	person->lastName = (char*) malloc(strlen(ln) + 1);
	strcpy(person->lastName, ln);
	person->title = (char*) malloc(strlen(title) + 1);
	strcpy(person->title, title);
	person->age = age;
}

void printPerson(Person *person)
{
	printf("Name: %s %s\nTitle: %s\nAge: %d\n",
		person->firstName, person->lastName, person->title, person->age);
}

void deallocatePerson(Person *person) {
	free(person->firstName);
	free(person->lastName);
	free(person->title);
}