#include "lists.h"

/**
 * pop_listint - delete
 * @head: point
 * Return: data
 */
int pop_listint(listint_t **head)
{
listint_t *h;
int c;
if (*head == NULL)
{
return (0);
}
h = (*head)->next;
c = (*head)->n;
free((*head));
*head = h;
return (c);
}
