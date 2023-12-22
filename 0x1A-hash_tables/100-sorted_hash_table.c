#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the created hash table, otherwise NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key string.
 * @value: The value string.
 *
 * Return: 1 if success, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (ht->shead == NULL || strcmp(new_node->key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		else
			ht->stail = new_node;
		ht->shead = new_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(new_node->key, tmp->snext->key) > 0)
			tmp = tmp->snext;
		new_node->snext = tmp->snext;
		if (tmp->snext != NULL)
			tmp->snext->sprev = new_node;
		else
			ht->stail = new_node;
		new_node->sprev = tmp;
		tmp->snext = new_node;
	}
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The sorted hash table.
 * @key: The key string.
 *
 * Return: The value associated with the key, otherwise NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (first)
			first = 0;
		else
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order.
 * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (first)
			first = 0;
		else
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
