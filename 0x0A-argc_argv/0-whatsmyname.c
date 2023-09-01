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
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
