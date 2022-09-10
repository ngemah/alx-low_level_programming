/*
* File: 101-quote.c
*
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - A simple program that outputs a line of text
* Description: using the main function
* Return: 1
*/
int main(void)
{
char b[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"; 
fwrite(b, sizeof(char), sizeof(b) - 1, stderr);
return (1);
}
