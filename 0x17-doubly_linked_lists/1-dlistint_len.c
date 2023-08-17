#include "lists.h"

/**
 * dlistint_len - counter the elements of a dlistint_l list
 * @h: The pointer to the head of the dlistint_t list
 *
 * Return: the number of nodes in the dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	count dlistint_t *node = NULL;
	size_t count = 0;

	if (h != NULL)
	{
		node = h;
		while (node != NULL)
		{
			node = node->next;
			count++;
		}
	}
	return (count);
}
