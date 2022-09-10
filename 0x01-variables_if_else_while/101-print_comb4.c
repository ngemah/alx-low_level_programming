/*
* File: 101-print_comb4.c
*
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing all possible different combinations of two digits.
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
int m;
int n;
int o;
for (m = 48; m < 56; m++)
{
for (n = m + 1; n < 57; n++)
{
for (o = n + 1; o < 58; o++)
{
putchar(m);
putchar(n);
putchar(o);
if (m != 55 || n != 56 || o != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
