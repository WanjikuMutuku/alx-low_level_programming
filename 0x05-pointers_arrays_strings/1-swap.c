#include "main.h"

/**
 * swap_int - Swaps two integers.
 * @a: value of integer.
 * @b: value of another integer.
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
