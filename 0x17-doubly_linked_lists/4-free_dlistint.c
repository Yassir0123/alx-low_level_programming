#include "lists.h"

/**
 * free_dlistint - frees a 
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current, *temp;
current = head;
while (current != NULL)
{
temp = current->next;
free(current);
current = temp;
}
}
