#include "main.h"
#include <stdlib.h>
/**
* *create_array - give data
* @size: size
* @c: char
* Return: return
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *t = (char *)malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
else
{
if (t == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
t[i] = c;
}
return (t);
}
}
return (NULL);
}
