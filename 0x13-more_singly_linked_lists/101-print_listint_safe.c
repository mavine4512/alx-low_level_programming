#include "lists.h"

/**
 * print_listint_safe - Function that prints a listint_t linked list
 * @head: pointer to the first node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	const listint_t *current = head;
	const listint_t *previous = NULL;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		counter++;

		previous = head;
		while (previous != current)
		{
			if (current == previous)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (counter);
			}
			previous = previous->next;
		}
		current = current->next;
	}
	return (counter);
}
