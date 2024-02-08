#include "lists.h"

/**
 * listint_len - info
 * @h: h
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t c;
c = 0;
if (h == NULL)
{
return (c);
}
while (h != NULL)
{
c++;
h = h->next;
}
return (c);
}
