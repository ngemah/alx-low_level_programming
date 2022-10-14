#ifndef VARIADIC_FUNCTIONS.H
#define VARIADIC_FUNCTIONS.H
#include <stdarg.h>
#include <stdio.h>

/**

*File: variadic_functions.h
*Auth: Richard Cudjoe

*Desc: Header file containing prototypes for all functions

* Used for Variadic functions
*/

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);


/**
 * struct funckey - a key for picking functions to use for printing
 * in 3-print_all.c
 *
 * @f: function to use for printing
 * @spec: character specifier
 */
typedef struct funckey
{
void (*f)(va_list);
char spec;
} funckey;

#endif
