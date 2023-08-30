#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * sqrt_checker - returns the natural square root of a number.
 * @n: integer value.
 * @divisor: base number to check
 *
 * Return: natural square root
 */

int sqrt_checker(int n, int divisor)
{
	if (n * n == divisor)
	{
		return (n);
	}
	if (n * n > divisor)
	{
		return (-1);
	}
	return (sqrt_checker(n + 1, divisor));
}
/**
*_sqrt_recursion - returns the natural square root of a number.
 * @n: integer value.
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_checker(1, n));
}
