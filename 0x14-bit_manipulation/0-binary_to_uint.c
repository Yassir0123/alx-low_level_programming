#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - info
 * @b: Info
 * Return: info
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int tot, count;
int size;

if (b == NULL)
{
return (0);
}
for (size = 0; b[size]; size++)
{
if (b[size] != '0' && b[size] != '1')
return (0);
}
for (count = 1, tot = 0, size--; size >= 0; size--, count *= 2)
{
if (b[size] == '1')
tot += count;
}
return (tot);
}
