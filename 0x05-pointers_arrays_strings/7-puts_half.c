#include "main.h"
/**
* puts_half - give data
* @str: pointer
*/
void puts_half(char *str)
{
int i;
int c;
c = 0;
for (i = 0; str[i] != '\0'; i++)
{
c++;
}
if (c % 2)
{
for (i = c / 2 + 1; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (c - 1) / 2 + 1; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
