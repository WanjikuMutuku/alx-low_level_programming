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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
