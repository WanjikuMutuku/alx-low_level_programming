#include "main.h"

/**
 * _puts - Prints a string using puts
 * @str: Value of string.
 *
 * Return: void.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
