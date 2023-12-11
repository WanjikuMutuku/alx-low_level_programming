#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the character of s.
 * @accept: bytes contained in initial segment.
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));

	return (0);
}
