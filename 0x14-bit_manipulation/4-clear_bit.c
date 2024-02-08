#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set
 * @n: pt
 * @index: inde
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int ciu = 1UL << index;
if (index > 64)
return (-1);
*n = *n & (~ciu);
return (1);
}
