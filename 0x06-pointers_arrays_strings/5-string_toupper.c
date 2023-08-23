#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: value that contains the string.
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
