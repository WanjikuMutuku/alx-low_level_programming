#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: first node.
 *
 * Return: head node's data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = 0;

	if (*head != NULL && *head != NULL)
	{
		data = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (data);
}
