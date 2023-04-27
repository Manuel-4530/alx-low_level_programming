#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds new node at the beginning of the list
 * @head: Pointer to the linked list
 * @str: String added to the list_t list
 * Return: the address of the new list, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	len = 0;
	while (str[len])
		len++;
	new->next = *head;
	new->len = len;
	*head = new;

	return (new);
}
