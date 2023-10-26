#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number of bits to be flipped
 * @m: the number itself.
 *
 * Return:  the number of bits youflipped from number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
