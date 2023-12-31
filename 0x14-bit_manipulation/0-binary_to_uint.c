#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: converted number or 0 if no more chars in string.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		res = res * 2 + (*b - '0');
		b++;
	}
	return (res);
}
