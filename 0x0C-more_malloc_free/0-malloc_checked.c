#include <stdio.h>
#include <stdlib.h>
/**
* *malloc_checked - info
* @b: info
* Return: return
*/
void *malloc_checked(unsigned int b)
{
void *a;
a = malloc(b);
if (a == NULL)
{
exit(98);
}
return (a);
}
