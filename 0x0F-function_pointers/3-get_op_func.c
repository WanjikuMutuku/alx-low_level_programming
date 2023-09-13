#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform the operation.
 * @s: operator passed as argument.
 *
 * Return:  pointer to the function that corresponds to the operator given.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op)
	{
		if (*s == *ops[i].op && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
