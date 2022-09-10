/*
* File: 102-print_comb5.c
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
int mfirst;
int m;
int nfirst;
int n;
for (mfirst = 48; mfirst < 58; mfirst++)
{
for (m = 48; m < 58; m++)
{
n = m + 1;
nfirst = mfirst;
for (; nfirst < 58; nfirst++)
{
for (; n < 58; n++)
{
putchar(mfirst);
putchar(m);
putchar(' ');
putchar(nfirst);
putchar(n);
if (mfirst != 57 || nfirst != 57 || m != 56 || n != 57)
{
putchar(',');
putchar(' ');
}
}
n = 48
}
}
}
putchar('\n');
return (0);
}
