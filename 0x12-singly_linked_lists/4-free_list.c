#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  frees a list_t list.
 * @head: pointer to the data list_t.
 *
 * Return: Alwaays success.
 */
void free_list(list_t *head)
{
	list_t *next = head->next;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = next;
	}
}
