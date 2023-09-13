#ifndef function_pointers_h
#define function_pointers_h
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));

#endif
