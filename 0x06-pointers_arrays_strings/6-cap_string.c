#include "main.h"
/**
* *cap_string - give capitalized results
* @c:pointer
* Return: result
*/
char *cap_string(char *c)
{
int i = 0;
while (c[i])
{
if (c[i] >= 'a' && c[i] <= 'z')
{
if (i == 0 || c[i - 1] == ' ' || c[i - 1] == '\t' || c[i - 1] == '\n' ||
c[i - 1] == ',' || c[i - 1] == ';' || c[i - 1] == '.' || c[i - 1] == '!' ||
c[i - 1] == '?' || c[i - 1] == '"' || c[i - 1] == '(' || c[i - 1] == ')' ||
c[i - 1] == '{' || c[i - 1] == '}')
{
c[i] -= 32;
}
}
i++;
}
return (c);
}
