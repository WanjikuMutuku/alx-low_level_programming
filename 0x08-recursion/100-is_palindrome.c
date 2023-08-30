#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string.
 *
 * Return: 1 if string is a pallindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
		return (pal_checker(s, 0, _strlen_recursion(s)));
	}
	return (0);
}

/**
 * strlen_recursion - returns the length of a string.
 * @s: string.
 *
 * Return: length of string.
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
		return (1 + strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * pal_checker - checks the characters for palindrome.
 * @s: string
 * @r: recursive iterator.
 * @len: length of string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */

int pal_checker(char *s, int r, int len)
{
	if (*(s + r) != *(s + len - 1))
	{
		return (0);
	}
	if (r >= len)
	{
		return (1);
	}
	return (pal_checker(s, r + 1, len - 1));
}

