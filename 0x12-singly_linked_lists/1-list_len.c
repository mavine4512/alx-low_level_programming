#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Return the number of elements in a linked list
 * @h: Printer to the list_t list
 * Return: number of elements  in h
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)/*if the list is empty, return 0*/
		return (0);

	return (1 + list_len(h->next));/*Recursive call with next node*/
}
