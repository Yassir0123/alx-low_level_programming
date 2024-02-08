#include "lists.h"

/**
 * add_nodeint_end - add
 * @head: pointer
 * @n: data
 * Return: point
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *h;
listint_t *p;
h = malloc(sizeof(listint_t));
if (h == NULL)
{
return (NULL);
}
h->n = n;
h->next = NULL;
if (*head == NULL)
{
*head = h;
}
else
{
p = *head;
while (p->next != NULL)
{
p = p->next;
}
p->next = h;
}
return (h);
}
