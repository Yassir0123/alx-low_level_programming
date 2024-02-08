#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* *_strdup - give data
* @str:  str
* Return: return
*/
char *_strdup(char *str)
{
int i;
if (str == NULL)
{
return (NULL);
}
else
{
char *r = (char *)malloc(strlen(str) + 1);
if (r == NULL)
{
return (NULL);
}
else
{
for (i = 0; str[i] != '\0'; i++)
{
r[i] = str[i];
}
r[i] = '\0';
return (r);
}
}
return (NULL);
}
