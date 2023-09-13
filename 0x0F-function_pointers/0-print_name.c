#include <stddef.h>
#include "function_pointers.h"
#include <string.h>

/**
 * print_name - Prints a name.
 * @name: character.
 * @f: pointer to the function print_name.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
