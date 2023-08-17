#include "lists.h"

/**
 * dlistint_len - counter the elements of a dlistint_l list
 * @h: The pointer to the head of the dlistint_t list
 *
 * Return: the number of nodes in the dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
