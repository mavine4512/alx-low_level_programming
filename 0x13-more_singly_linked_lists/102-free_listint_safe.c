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

	if (!h || !*h)
		return (0);

	for (; *h && (diff = *h - (*h)->next) >= 0; len++)
	{
		free(*h);
		*h = (*h)->next;
	}

	free(*h);
	*h = NULL;
	len++;

	return (len);
}
