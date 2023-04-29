#include "lists.h"

/**
 * free_listint - Free a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);
	free(head);
}
