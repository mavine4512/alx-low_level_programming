#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a linked list
 * @head: Pointer to the first element in the list
 * @n: Data to  insert in the new element
 * Return: Pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (!*head)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}
	return (add_nodeint_end(&((*head)->next), n));
}
