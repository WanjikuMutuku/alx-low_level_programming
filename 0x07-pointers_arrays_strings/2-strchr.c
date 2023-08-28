#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr -  locates a character in a string.
 * @c: character.
 * @s: string.
 *
 * Return: s in the occurrence of a string, and NULL if character is no found.
 */

char *_strchr(char *s, char c)
{

	if (strchr(s, c) != NULL)
    {
       printf(s, c);
    }
	else 
	{
		printf(s, c);
	}
    return (0);
}
