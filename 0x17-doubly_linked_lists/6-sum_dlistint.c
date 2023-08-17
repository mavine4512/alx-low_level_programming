#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the data of a dlistint_t list
 * @head: The pointer to the head node
 *
 * Return: The sum of the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
