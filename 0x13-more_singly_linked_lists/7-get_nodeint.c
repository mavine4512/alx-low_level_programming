#include "lists.h"

/**
 * get_nodeint_at_index - Return the node at a certain index in a linked list
 * @head: First node in the linked list
 * @index: inex of the node to return
 * Return: Pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
	{
		return (NULL);
	}
	else if (index == 0)
	{
		return (head);
	}
	else
	{
		return (get_nodeint_at_index(head->next, index - 1));
	}
}
