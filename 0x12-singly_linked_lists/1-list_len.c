#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t.
 * @h: pointe to the list_t
 *
 * Return: elements linked.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
