#include "lists.h"

/**
 * listint_len - Functionto return the number of elements in a linked lists
 * @h: linked list of type listint to traverse
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	for (; h != NULL; h = h->next)
		num++;

	return (num);
}
