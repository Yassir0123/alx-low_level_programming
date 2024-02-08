#include <stdlib.h>
/**
 * *_calloc - info
 * @nmemb: data
 * @size: data
 * Return: return
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *r;
unsigned int t;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
t = nmemb * size;
r = malloc(t);
if (r == NULL)
return (NULL);
for (i = 0; i < t; i++)
{
r[i] = 0;
}
return (r);
}
