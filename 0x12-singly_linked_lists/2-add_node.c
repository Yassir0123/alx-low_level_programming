#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - infos
* @head: data
* @str: data
* Return: ths
*/
list_t *add_node(list_t **head, const char *str)
{
int i;
list_t *pp;
int c;
c = 0;
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
pp->next = (*head);
(*head) = pp;
return (*head);
}
