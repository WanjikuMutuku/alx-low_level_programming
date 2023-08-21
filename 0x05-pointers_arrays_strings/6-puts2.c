#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: Character to be printed.
 *
 * Return: void.
 */

void puts2(char *str)
{
	int a, i;

	 i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (a = 0; a < i; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
