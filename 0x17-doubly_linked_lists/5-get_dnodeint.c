#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves the nth node of a dlistint-t list
 * @head: The pointer to the head node
 * @index: The index of the node to find
 *
 * Return: A pointer to the new node or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	while ((i != index) && (node != NULL))
	{
		node = node->next;
		i++;
	}
	if (i == index)
	{
		return (node);
	}
	else
	{
		return (NULL);
	}
}
