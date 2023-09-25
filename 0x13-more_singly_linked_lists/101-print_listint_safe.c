#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: first node.
 *
 * Return:  number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		node_count++;
	}
	if (ferror(stdout))
	{
		exit(98);
	}
	return (node_count);
}
