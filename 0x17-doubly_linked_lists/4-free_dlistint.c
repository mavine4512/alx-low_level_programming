#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: The pointer to the head node's address
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
