#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer value.
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	
	if (n == 0)
	{
		return (0);
	
	}
	_putchar(sqrt(n));
	return (0);
}
