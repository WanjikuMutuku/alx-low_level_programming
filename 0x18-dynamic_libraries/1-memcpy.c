#include "main.h"
#include <string.h>

/**
 * _memcpy -  copies memory area.
 * @dest: memory area to receive the copy.
 * @src: memory area to be copied.
 * @n: bytes to be copied.
 *
 * Return: value of dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
