#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* *string_nconcat- give data
* @s1:  str
* @s2: str
* @n:  n
* Return: return
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
int a, b, c;
int i;
unsigned int j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
a = strlen(s1);
b = strlen(s2);
if (n >= 2)
c = a + b;
else
c = a + n;
s = (char *)malloc(c + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < a; i++)
{
s[i] = s1[i];
}
for (j = 0; j < n && s2[j] != '\0'; j++)
{
s[i++] = s2[j];
}
s[i] = '\0';
return (s);
}
