#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: string to be reversed.
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int count, b, e;

	count = 0;

	while (s[count] != '\0')
	{
	count++;
	}

	e = count;
	for (b = e - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

}
