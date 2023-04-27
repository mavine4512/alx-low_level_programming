#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function to free a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	/*Check if the head pointer is NULL*/
	if (head == NULL)
		return;

	/*Recursively free the rest of the list*/
	free_list(head->next);

	/*Free the current node's string and memory*/
	free(head->str);
	free(head);
}
