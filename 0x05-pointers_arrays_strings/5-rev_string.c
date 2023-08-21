#include "main.h"

/**
 * rev_string -  reverses a string.
 * @s: Value to be reversed.
 *
 * Return: void
 */

void rev_string(char *s)
{
	int temp;
	int start, end, i;

	start = 0;
	end = 0;

	while (s[start] != '\0')
	{
		start++;
	}
	end = start - 1;

	for (i = 0; i < start / 2; i++)
	{
		temp = s[i];
		s[i] = s[end];
			s[end--] = temp;
	}
}
