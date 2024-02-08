#include "main.h"
/**
* *string_toupper - give upper
* @c:pointer
* Return: result
*/
char *string_toupper(char *c)
{
int i;
char r;
for (i = 0; c[i] != '\0'; i++)
{
if (c[i] >= 'a' && c[i] <= 'z')
{
r = c[i] - 32;
c[i] = r;
}
}
return (c);
}
