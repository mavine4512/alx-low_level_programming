#include "lists.h"

/**
 * delete_dnodeint_at_index -  Delete the nodes at a given \
 * position in a dlistint_t list
 * @head: The pointer to the head node's address
 * @index: The 0-based position of the node to delete
 *
 * Return: 1 if the deletion was successful otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int i = 0;

	if (head != NULL)
	{
		node =  *head;
		while ((i != index) && (node != NULL))
		{
			node = node->next;
			i++;
		}
		if ((i == index) && (node != NULL))
		{
			if (node->next != NULL)
			{
				node->next->prev = node->prev;
			}
			if (node->prev != NULL)
			{
				node->prev->next = node->next;
			}
			if (i == 0)
			{
				*head = node->next;
			}
			free(node);
			node = NULL;
			return (1);
		}
	}
	return (-1);
}
