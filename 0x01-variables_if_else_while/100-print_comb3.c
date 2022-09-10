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
for (n = 48; n <= 56; n++)
{
for (m = 49; m <= 57; m++)
{if (m > n)
{
putchar(',');
putchar(' ');
if (n != 56 || m != )
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
