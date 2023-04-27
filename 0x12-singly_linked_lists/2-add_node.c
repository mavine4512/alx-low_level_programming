#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	/*Declare a pointer to a new list_t struct*/
	list_t *new_node;

	/*check if the input string is empty*/
	if (!str)
		return (NULL);

	/*Create a new list node and allocate memory for it*/
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	/*Initialize the new node with the input values*/
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/*if the list is empty, insert the new node at the beginning*/
	if (!(*head))
		*head = new_node;
	/*if the list is not empty, insert the new node at the beginning*/
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	/*Return the address of the new node*/
	return (new_node);
}
