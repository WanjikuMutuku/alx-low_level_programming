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
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (count);

	current = *h;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		if (next >= current)
			break;
		current = next;
	}

	*h = NULL;

	return (count);
}
