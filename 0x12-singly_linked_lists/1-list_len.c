#include "lists.h"
/**
* list_len - info
* @h: info
* Return: Num
*/
size_t list_len(const list_t *h)
{
const list_t *pp;
size_t c;
c = 0;
pp = h;
if (pp == NULL)
{
return (0);
}
else
{
while (pp != NULL)
{
c += 1;
pp = pp->next;
}
}
return (c);
}
