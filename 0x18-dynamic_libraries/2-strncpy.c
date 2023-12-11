#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string.
 * @dest: value to be returned.
 * @src: value to be copied.
 * @n: number of times.
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
