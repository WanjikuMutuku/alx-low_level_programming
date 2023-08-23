#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string.
 * @str: value to be capitalised.
 *
 * Return: Always 0.
 */

char *cap_string(char * str)
{
	int i;
	
	i = 0;
	if (str[0] >= 97 && str[0] <= 123)
	{
		str[0] -= 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i-1] == 32)
		{
			if(str[i] >= 97 && str[i] <= 123)
			{
				str[i] -= 32;
			} 
		}
	}
	if (str[i] != ' ')
	{
		str[i] -= 32;
	}
	return (str);
}
