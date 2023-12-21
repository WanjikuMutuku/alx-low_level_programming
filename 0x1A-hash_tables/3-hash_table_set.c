#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key that is not empty.
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	char *key_copy = strdup(key);
	char *value_copy = strdup(value);

	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (key == NULL || ht == NULL)
		return (0);

	if (new_node == NULL)
		return (0);

	if (key_copy == NULL || value_copy == NULL)
	{
		free(new_node);
		free(key_copy);
		free(value_copy);
		return (0);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		hash_node_t *current = ht->array[index];

		while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = value_copy;
				free(new_node->key);
				free(new_node);
				return (1);
			}
			current = current->next;
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
