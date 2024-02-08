#include "lists.h"

/**
 * add_nodeint - add
 * @head: point
 * @n: n
 * Return: null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *h;
h = malloc(sizeof(listint_t));
if (h == NULL)
{
return (NULL);
}
h->n = n;
h->next = *head;
*head = h;
return (h);
}
