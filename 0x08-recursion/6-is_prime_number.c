#include "main.h"

/**
  * checker - checks recursively the input from is_prime_number
  * @n: iterator
  * @base: base number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (checker(n + 1, base));
	return (1);
}

/**
 * is_prime_number - returns 1 ifinteger is prime no, 0 otherwise.
 * @n: integer value
 *
 * Return: always success.
 */

int is_prime_number(int n)
{
	return (checker(2, n));
}
