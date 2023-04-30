#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: First node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);
	else
		return (head->n + sum_listint(head->next));
}
