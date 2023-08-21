#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The value to be printed.
 *
 * Return: Void.
 */

void print_rev(char *s)
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
	_putchar('\n');

}
