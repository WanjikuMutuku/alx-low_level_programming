#ifndef SEARCH_ALOGS_H
#define SEARCH_ALOGS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);

#endif
