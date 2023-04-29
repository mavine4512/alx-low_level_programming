#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: The data inside the elements that was deleted,
 * or o if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	num = (*head)->n;

	free(*head);
	*head = temp;

	return (num);
}
