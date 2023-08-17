#include "main.h"

/**
 * print_number - prints an integer.
 *@n: the number that is to be printed.
 * Return: 0 (Success)
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar(n);
	if (n / 10)
		print_number(n / 10);
_putchar('0' + (n % 10));
}
