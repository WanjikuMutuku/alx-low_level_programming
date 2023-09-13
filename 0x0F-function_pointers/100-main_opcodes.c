#include <stdio.h>
#include <stdlib.h>

/**
 * main- entry point.
 * @argc: argument counts
 * @argv: array contaning arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int nob, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nob = atoi(argv[1]);

	if (nob < 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *mainptr = (unsigned char *)main;

	for (i = 0; i < nob; i++)
	{
		printf("%02x", mainptr[i]);
		if (i < nob - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
