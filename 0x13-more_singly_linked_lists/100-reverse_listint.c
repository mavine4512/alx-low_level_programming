#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: pointer to te first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	for (; *head; *head = next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
	}
	*head = prev;

	return (*head);
}
