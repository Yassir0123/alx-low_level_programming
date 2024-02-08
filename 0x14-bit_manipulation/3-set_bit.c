#include "main.h"

/**
 * set_bit - info
 * @n: data
 * @index: ind
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int cou = 1UL << index;
if (index > 64)
return (-1);
*n = (*n | cou);
return (1);
}
