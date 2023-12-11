#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 * @s1: value to be compared.
 * @s2: value to be compared against.
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 > s2)
	{
		return (strcmp(s1, s2));
	}
	if (s1 < s2)
	{
		return (-strcmp(s2, s1));
	}
	else
	{
		return (strcmp(s1, s1));
	}
}
