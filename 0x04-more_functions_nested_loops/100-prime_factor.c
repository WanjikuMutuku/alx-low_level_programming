#include <stdio.h>
#include <math.h>

/**
 * main -  prints the largest prime factor of a number.
 *
 * Return: 0 (Success)
 */

int main(void)
{long int num = 612852475143;
	int prime;

	for (prime = 2; prime <= sqrt(num); prime++)
	{
		/*int saved_prime;*/

		if (num % prime == 0)
		{
			/*saved_prime = prime;*/
			num = num / prime;
			prime = 1;
		/* printf("%ld\n", num);*/
		}
	}
	printf("%ld\n", num);
return (0);
}
