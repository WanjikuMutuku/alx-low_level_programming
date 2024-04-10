#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value using jump search
 * @array: pomter to the first element of array
 * @size: number of elments in array
 * @value: value to search for.
 *
 * Return: first index where value is located, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);

		if (prev >= size)
			return (-1);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;

		if (prev == fmin(step + 1, size))
			return (-1);
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return ((int)prev);
	}
	return (-1);
}
