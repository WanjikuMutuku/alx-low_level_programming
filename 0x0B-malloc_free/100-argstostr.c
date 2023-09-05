#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: Always success.
 */

char *argstostr(int ac, char **av)
{
	int totalength = 0;
	int i = 0;
	char *result;
	int cp = 0;

	if (ac == 0 && av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		totalength += strlen(av[i] + 1);
		i++;
	}
	result = (char *)malloc((totalength + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		strcpy(result + cp, av[i]);
		cp += strlen(av[i]);
		result[cp] = '\n';
		cp++;
		i++;
	}
	result[cp] = '\0';

	return (result);
}
