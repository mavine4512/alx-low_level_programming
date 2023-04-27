#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function to adda new node t end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;

	/*Check for NULL arguments*/
	if (head == NULL || str == NULL)
		return (NULL);

	/*Allocate memory for the new node*/
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/*Copy the string into the new node*/
	new->str = strdup(str);
	if (new->str == NULL)
	{
		/*Clean up if strdup fails*/
		free(new);
		return (NULL);
	}

	/*set the length of the string and the next pointer*/
	new->len = strlen(str);
	new->next = NULL;

	/*Add the node to the end of the list*/
	if  (*head == NULL)
	{
		/*if the list is empty, set the head to the new node*/
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}
	return (new);
}
