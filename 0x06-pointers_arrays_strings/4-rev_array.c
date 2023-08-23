#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @n: number of elements of the array.
 * @a: the array containing n number of integers.
 *
 * Return: Void.
 */

void reverse_array(int *a, int n)
{
	int temp, start;

	temp = 0;

	for (start = 0; start < n / 2; start++)
	{
		temp = a[start];
		a[start] = a[n - start - 1];
		a[n - start - 1] = temp;
	}
}
