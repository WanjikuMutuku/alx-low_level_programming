#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string value.
 * @accept: number of bytes.
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
	return (0);
}
