#include "main.h"

/**
 * print_triangle - Prints a triangle.
 * @size: shows the size of the triangle.
 *
 * Return: 0 (Success)
 */

void print_triangle(int size)
{
	int a, b = 0;
	int space;

	if (size > 0)
	{
		while (b < size)
		{
			space = size - b - 1;
			while (a < size)
			{
				if (space > a)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				a++;
			}
			b++;
			a = 0;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
