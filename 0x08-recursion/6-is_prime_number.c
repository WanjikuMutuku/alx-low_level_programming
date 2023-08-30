#include "main.h"

/**
 * is_prime_number - returns 1 ifinteger is prime no, 0 otherwise.
 * @n: integer value
 *
 * Return: always success.
 */

int is_prime_number(int n)
{
	int i = 0;
	
	if (i <= 1)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (1);
	}
	return (0);
}
