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
	malloc(sizeof(str));
	free(str);
	strdup(str);
	return (0);
}
