#include "main.h"
#include <stdio.h>
/**
* *_strstr - give pointer
* @haystack: pointer
* @needle: variable
* Return: value
*/
char *_strstr(char *haystack, char *needle)
{
int i;
int k;
int j;
for (i = 0; haystack[i] != '\0'; i++)
{
k = 1;
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
k = 0;
break;
}
}
if (k == 1)
{
return (&haystack[i]);
}
}
return (NULL);
}
