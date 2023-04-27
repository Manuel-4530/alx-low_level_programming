#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds new node at the end of a list_t list
 * @head: Pointer to the limked list
 * @str: String stored in the new node
 * Return: Address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	if (!head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
