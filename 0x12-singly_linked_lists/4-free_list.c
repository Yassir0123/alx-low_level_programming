#include <stdlib.h>
#include "lists.h"
/**
* free_list - info
* @head: infos
*/
void free_list(list_t *head)
{
list_t *pr;
while (head != NULL)
{
pr = head->next;
free(head->str);
free(head);
head = pr;
}
}
