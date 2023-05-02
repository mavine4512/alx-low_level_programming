#include "lists.h"

/**
 * ind_listint_loop - Finds a loop in a linked list
 * @head: A pointer to the head node of the list
 * Return: if a loop is found, a pointer to the node
 * where the loop starts, if there is no loop - NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (!head)
		return (NULL);

	do {
		if (fast == NULL || fast->next == NULL)
			return (NULL);

		slow = slow->next;
		fast = fast->next->next;
	} while (slow != fast);

	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return (slow);
}
