#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - infos
* @head: data
* @str: data
* Return: ths
*/
list_t *add_node_end(list_t **head, const char *str)
{
int i;
list_t *pp;
int c;
list_t *pr;
c = 0;
pr = *head;
for (i = 0; str[i] != '\0'; i++)
{
c++;
}
pp = malloc(sizeof(list_t));
if (pp == NULL)
{
return (NULL);
}
pp->str = strdup(str);
pp->len = c;
pp->next = NULL;
if (*head == NULL)
{
*head = pp;
return (pp);
}
else
{
while (pr->next != NULL)
{
pr = pr->next;
}
pr->next = pp;
}
return (pp);
}
