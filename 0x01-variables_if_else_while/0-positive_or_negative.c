/*
* File: 0-p0sitive_or_negative.c
*
*/

#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number and states whether 
 * It is positive, negative, or zero.
 * 
 * Return: Always 0.
 */
int main(void)
{
    int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    if (n>0)
    printf("%d is positive\n", n);
    else if (n<0)
    printf("%d is negative\n", n);
    else
    printf("%d is zero\n", n);

    return (0);
}