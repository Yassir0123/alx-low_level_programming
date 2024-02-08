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
unsigned int i;
unsigned int j;
unsigned int l;
unsigned int t;
l = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[l] != '\0')
l++;
t = (l + n) * sizeof(*s);
s = malloc(t + 1);
if (s == NULL)
return (NULL);
i = 0;
for (i = 0; i < t && s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
j = 0;
while (i < t && s2[j] != '\0')
{
s[i] = s2[j];
i++;
j++;
}
s[i] = '\0';
return (s);
}
