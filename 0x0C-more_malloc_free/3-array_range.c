#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum values
 * @max: maximum values.
 *
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, *result;

	if (min > max)
		return (NULL);
	result = malloc((max - min + 1) * sizeof(int));
	if (result == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		result[i] = min + i;
	return (result);
}
