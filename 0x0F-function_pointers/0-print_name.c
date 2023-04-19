#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: A pointer to charcter string to be printed
 * @f: Pointer to the print function
 */
void print_name(char *name, void (*f)(char *))
{
	char *name_copy;

	if (!name || !f)/*if name and function is NULL*/
		return;
	/*allocate memory for a new string name_copy, copy of name*/
	/*malloc, fun is passed in as argument to allocate enough*/
	/*memory to hold the name Pul 1 additional byte for null char*/
	name_copy = malloc(sizeof(char) * (strlen(name) + 1));

	if (!name_copy)
		return;/*if pointer is null*/

	strcpy(name_copy, name);/*copy name string to a new name_copy using strcpy()*/
	f(name_copy);/*call function pointed to by f and pass in the name_copy*/
	free(name_copy);/*free memory allocated for name_copy*/
}
