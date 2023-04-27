#include "lists.h"

/**
 * list_len - Number of elements of a list
 * @h: Pointer to a linked list
 * Return: Number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
