#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

/**

*File: main.h
*Auth: Richard Cudjoe

*Desc: Header file containing prototypes for all functions

* Used for static libraries, how they work, how to create one, and how to use them
*/

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /*FUNCTION_POINTERS_H*/
