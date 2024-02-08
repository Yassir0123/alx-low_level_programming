#include "lists.h"
/**
* insert_nodeint_at_index - insert
* @head: pointer
* @idx: index
* @n: hey
* Return: pointe
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *p;
listint_t *pp;
if (head == NULL)
{
return (NULL);
}
p = malloc(sizeof(listint_t));
if (p == NULL)
{
return (NULL);
}
p->n = n;
p->next = NULL;
if (idx == 0)
{
p->next = *head;
*head = p;
return (p);
}
pp = *head;
for (i = 0; pp && i < idx; i++)
{
if (i == idx - 1)
{
p->next = pp->next;
pp->next = p;
return (p);
}
else
pp = pp->next;
}
return (NULL);
}
