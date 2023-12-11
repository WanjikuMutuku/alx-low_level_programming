#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: function to be returned
 * @src: value to be appended.
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
