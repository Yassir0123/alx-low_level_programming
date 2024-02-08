#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* *str_concat - give data
* @s1:  str
* @s2: s2
* Return: return
*/
char *str_concat(char *s1, char *s2)
{
char *re;
int a;
int b;
int total;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
a = strlen(s1);
b = strlen(s2);
total = a + b;
re = (char *)malloc((total + 1) * sizeof(char));
if (re == NULL)
{
return (NULL);
}
strcpy(re, s1);
strcat(re, s2);
return (re);
}
