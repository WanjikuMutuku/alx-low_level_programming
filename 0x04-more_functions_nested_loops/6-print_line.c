#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: is the numbe of times _ is printed.
 *
 * Return: void
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
