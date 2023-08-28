#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: memory area pointed by a value.
 * @b: constant byte.
 * @n: first number of bytes to be filled.
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
