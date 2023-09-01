#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument count.
 * @argv: vector containing array of type char.
 *
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
