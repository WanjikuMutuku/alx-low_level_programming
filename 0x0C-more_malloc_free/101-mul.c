#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiples two integers
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always success.
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (num1 < 0 || num2 < 0)
	{
		printf("Error\n");
		return (98);
	}
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}
