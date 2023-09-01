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
	__attribute__((unused)) char **unused_argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
