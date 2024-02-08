#include "main.h"
/**
* *leet - give leet
* @c:pointer
* Return: result
*/
char *leet(char *c)
{
int i;
int j;
char r[] = "aAeEoOtTlL";
char v[] = "4433007711";
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; r[j] != '\0'; j++)
{
if (c[i] == r[j])
{
c[i] = v[j];
break;
}
}
}
return (c);
}
