#include "main.h"
#include <stdio.h>

/**
 * flip_bits - ff
 * @n: ff
 * @m: ss
 * Return: nn
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int min = n ^ m;
int co = 0;
while (min)
{
co++;
min &= (min - 1);
}
return (co);
}
