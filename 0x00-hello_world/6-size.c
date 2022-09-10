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
printf("%s%i%s\n", "Size of a char: ", sizeof(char), " byte(s)");
printf("%s%i%s\n", "Size of an int: ", sizeof(int), " byte(s)");
printf("%s%i%s\n", "Size of a long int: ", sizeof(long int), " byte(s)");
printf("%s%i%s\n", "Size of a long long int: ", sizeof(long long int), " byte(s)");
printf("%s%i%s\n", "Size of a float: ", sizeof(float), " byte(s)");
return (0);
}
