#include "search_algos.h"

/**
 * binary_search - searches for a value using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: calue to search for
 *
 * Return: index where value is located, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		print_array(array, left, right);

		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
/**
 * print_array - Prints the elements of the array within a range
 * @array: ponter to the first element of the array
 * @start: start index of the range
 * @end: end index of the range
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}
