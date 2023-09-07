#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b:non-negative value.
 *
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
