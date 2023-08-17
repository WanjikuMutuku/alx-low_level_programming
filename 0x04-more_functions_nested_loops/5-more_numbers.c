#include "main.h"

/**
 * more_numbers - Prints 10 times from 0 to 14.
 *
 * Return: void
 */

void more_numbers(void)
{
	char c, d = 0;

	while (c < 10)
	{
		while (d <= 14)
		{
			if (d > 9)
			_putchar(d / 10 + '0');
			_putchar(d % 10 + '0');
			d++;
		}
		_putchar('\n');
		c++;
		d = 0;
	}
}
