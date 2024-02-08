#include "lists.h"

/**
 * print_listint - info
 * @h: infoi
 * Return: numbers
 */
size_t print_listint(const listint_t *h)
{
int c;
c = 0;
if (h == NULL)
{
return (c);
}
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
c++;
}
return (c);
}
