/*
* File: 100-print_comb3.c
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
int n;
int m;
for (n = 48; n < 57; n++)
{
for (m = n + 1; m < 58; m++)
{
putchar(n);
putchar(m);
if (n != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
