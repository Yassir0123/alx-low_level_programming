#include "main.h"
/**
* *_memset - give n values
* @s: pointer
* @b: variable
* @n: second variable
* Return: value
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
s[j] = b;
}
return (s);
}
