#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: value to be returned.
 * @src: String to be concatenated.
 * @n: number of bytes.
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
