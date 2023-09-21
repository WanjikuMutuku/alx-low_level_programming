#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the first node.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		len++;
		h = h->next;
	}
	return (len);
}
