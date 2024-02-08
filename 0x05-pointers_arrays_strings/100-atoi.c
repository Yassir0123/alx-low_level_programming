#include "main.h"
/**
 * _atoi - convert a string representation of an integer to an integer
 * @s: string possibly containing an integer
 * Return: first integer in string
 */
int _atoi(char *s)
{
int si = 1;
unsigned int st = 0;
int r = 0;
for (; *s != '\0'; s++)
{
if (*s == '-')
si *= -1;
else if (*s >= '0' && *s <= '9')
break;
}
while (*s >= '0' && *s <= '9')
{
st *= 10;
st += *s - '0';
s++;
}
if (si == -1)
r = -st;
else
r = st;
return (r);
}
