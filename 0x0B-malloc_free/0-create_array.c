#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,initializes with a specific char.
 * @size: value of a positive integer.
 * @c: character.
 *
 * Return: always success
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
