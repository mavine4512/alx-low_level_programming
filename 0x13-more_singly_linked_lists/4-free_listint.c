#include "lists.h"

/**
 * free_listint - Free a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;

	while (head->next)
	{
		listint_t *temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
