#include "main.h"
#include <stdio.h>
/**
* _strspn - give pointer
* @s: pointer
* @accept: variable
* Return: value
*/
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
unsigned int k;
k = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != ' ')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
k++;
break;
}
}
}
else
{
break;
}
}
return (k);
}
