#include "main.h"
/**
* *_memcpy - give n values
* @dest: pointer
* @src: pointer
* @n: second variable
* Return: value
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
dest[j] = src[j];
}
return (dest);
}
