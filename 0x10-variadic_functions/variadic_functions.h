#ifndef VARIADIC_FUNCTIONS.H
#define VARIADIC_FUNCTIONS.H
#include <stdarg.h>

/**

*File: main.h
*Auth: Richard Cudjoe

*Desc: Header file containing prototypes for all functions

* Used for static libraries, how they work, how to create one, and how to use them
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

#endif /*VARIADIC_FUNCTIONS.H*/
