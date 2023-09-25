#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: first node.
 * @idx:  index of the list where the new node should be added.
 * @n: all data.
 *
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int count = 0;

	if (idx == 0)
	{
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (current != NULL && count < idx - 1)
		{
			current = current->next;
			count++;
		}
		if (current == NULL)
		{
			return (NULL);
		}
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
	}
}
