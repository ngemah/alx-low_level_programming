/*
* File: 6-size.c
*
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - A simple program that outputs a line of text using puts()
* Description: using the main function
* Return: 0
*/
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;
printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of an int: %ld byte(s)\n", sizeof(i));
printf("Size of a long int: %ld byte(s)\n", sizeof(li));
printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
printf("Size of a float: %ld byte(s)\n", sizeof(f));
return (0);
}
