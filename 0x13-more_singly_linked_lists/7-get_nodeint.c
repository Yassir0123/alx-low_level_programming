#include "lists.h"

/**
 * get_nodeint_at_index - node
 * @head: data
 * @index: index
 * Return: info
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *p;
p = head;
i = 0;
if (head == NULL)
{
return (NULL);
}
while (p != NULL && i < index)
{
p = p->next;
i++;
}
if (p != NULL)
{
return (p);
}
return (NULL);
}
