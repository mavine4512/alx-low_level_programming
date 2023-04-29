#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: Pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	if (!head || !*head)
		return;

	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
