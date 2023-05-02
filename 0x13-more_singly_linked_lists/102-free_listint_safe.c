#include "lists.h"

/**
 * free_listint_safe - Function that frees a listint_t list
 * @h: Pointer to the first node in the linked list
 * Return: Number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	do {
		diff = (*h) - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		else
		{
			free(*h);
			*h = NULL;
		}
		len++;
	} while (*h);

	return (len);
}
