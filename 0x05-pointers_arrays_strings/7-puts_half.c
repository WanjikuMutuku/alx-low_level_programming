#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: the value to be printed.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int n, i;
	int length_of_the_string;

	length_of_the_string = 0;
	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}

	if (length_of_the_string % 2 == 0)
	{
		for (i = length_of_the_string / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (length_of_the_string % 2)
	{
		for (n = (length_of_the_string - 1) / 2; n < length_of_the_string - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
