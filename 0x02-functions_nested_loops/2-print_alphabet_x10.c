#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int num = 0;

	while (num++ <= 9)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

		_putchar('\n');
	}
}
