#include "lists.h"

/**
 * delete_nodeint_at_index - deletes
 * @head: point
 * @index: index
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *p = *head;
listint_t *pp = NULL;
unsigned int i = 0;
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(p);
return (1);
}
while (p != NULL && i < index)
{
pp = p;
p = p->next;
i++;
}
if (p == NULL)
{
return (-1);
}
pp->next = p->next;
free(p);
return (1);
}
