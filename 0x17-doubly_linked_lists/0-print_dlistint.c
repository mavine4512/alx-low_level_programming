#include "lists.h"

/**
 * print_dlist - prints all the elements of a dlist_t
 * list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = NULL;
	size_t count = 0;

	if (h != NULL)
	{
		node = h;
		while (node != NULL)
		{
			printf("%d\n", node->n);
			node = node->next;
			count++;
		}
	}
	return (count);
}
