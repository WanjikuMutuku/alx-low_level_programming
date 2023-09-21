#include "lists.h"
#include <stdio.h>

/**
 * printmessage - prints a message.
 *
 * Return: Always success
 */
void printmessage(void) __attribute__((constructor));

void printmessage(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
