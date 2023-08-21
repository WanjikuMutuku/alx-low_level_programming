#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed by dest.
 * @dest: function that receives the copy.
 * @src: fustion that is to be copied.
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
