#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: The pointer to the head node's address
 * @n: The item to store in the new node
 *
 * Return: A pointer to the new node or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	if (head != NULL)
	{
		node = malloc(sizeof(dlistint_t));
		if (node != NULL)
		{
			node->n = n;
			node->prev = NULL;
			node->next = *head;
			if (*head != NULL)
			{
				(*head)->prev = node;
			}
			*head = node;
		}
	}
	return (node);
}
