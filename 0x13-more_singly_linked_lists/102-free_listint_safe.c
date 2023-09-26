#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the first node.
 *
 * Return: size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current = *h;
	listint_t *next_node;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		node_count++;
		current = next_node;
	}
	*h = NULL;
	return (node_count);
}
