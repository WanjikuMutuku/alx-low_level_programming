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
	int i, len;
	char *str;

	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");

	}
	return (str);
}
