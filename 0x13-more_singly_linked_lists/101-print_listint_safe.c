#include<stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Entry Point
 * Description: Function that prints a linked list
 * @head: pointer to the head of the listint_t to check
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
