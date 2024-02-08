#include "lists.h"

/**
 * sum_listint - calculate
 * @head: info
 * Return: result
 */
int sum_listint(listint_t *head)
{
int s;
if (head == NULL)
{
return (0);
}
s = 0;
while (head != NULL)
{
s = s  + head->n;
head = head->next;
}
return (s);
}
