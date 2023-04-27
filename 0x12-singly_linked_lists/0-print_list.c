#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function to print all the elements of a linked list
 * @h: pointer to the list-t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	/*Initialize a variable to keep track of the number of nodes printed*/
	size_t num_nodes_printed = 0;

	/*Loop through each node in the linked list*/
	while (h != NULL)
	{
		/*Check through each node in the linked list*/
		if (h->str == NULL)
			printf("[0] (nil)\n");/*if it is NULL, print "(nil)*/
		else
			printf("[%u] %s\n", h->len, h->str);/*print the string & its length*/

		/*Move to the next node*/
		h = h->next;

		/*Increment the number of nodes printed*/
		num_nodes_printed++;
	}

	/*Return the total number of nodes printed*/
	return (num_nodes_printed);
}
