#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: long integer value.
 * @index: index, starting from 0 of the bit you want to get
 *
 * Return: value of the bit at index index or -1 if an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if (n & mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
