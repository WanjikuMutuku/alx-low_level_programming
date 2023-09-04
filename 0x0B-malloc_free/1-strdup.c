#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 * @str: string of characters.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	return (strdup(str));
	return (0);
}
