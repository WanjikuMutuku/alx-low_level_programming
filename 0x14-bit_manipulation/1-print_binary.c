#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: integer value.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if (n & mask)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			putchar('0');
		}
		mask >>= 1;
	}
	if (!flag)
	{
		putchar('0');
	}
}
