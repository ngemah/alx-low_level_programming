#include "lists.h"

/**
 * print_listint - print the int value in each element of a list.
 * @h: pointer to the head of a list.
 *
 * Return: Number of elements in a list.
 */
size_t print_listint(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;
while (cursor != NULL)
{
printf("%d", cursor->n);
count += 1;
cursor = cursor ->next;
}
return (count);
}
