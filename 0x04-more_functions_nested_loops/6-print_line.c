#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: is the numbe of times _ is printed.
 *
 * Return: 0 (Success)
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
