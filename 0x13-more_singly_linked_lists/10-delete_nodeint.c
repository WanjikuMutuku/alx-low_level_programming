#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  deletes the node at index.
 * @head: first node.
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		while (current != NULL && count < index - 1)
		{
			current = current->next;
			count++;
		}
		if (current == NULL || current->next == NULL)
		{
			return (-1);
		}
		temp = current->next;
		current->next = current->next->next;
		free(temp);
		return (1);
	}
}
