#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string.
 *
 * Return: always success
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	size_t length1;
	size_t length2;
	size_t totalen;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	length1 = strlen(s1);
	length2 = strlen(s2);
	totalen = length1 + length2 + 1;

	concatenate = (char *)malloc(totalen);
	if (concatenate == NULL)
	{
		return (NULL);
	}
	strcpy(concatenate, s1);
	strcat(concatenate, s2);

	return (concatenate);
}
