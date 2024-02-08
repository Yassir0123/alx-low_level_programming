#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: Decimal number to be converted to binary
 */
void print_binary(unsigned long int n)
{
unsigned long int info = 1UL << ((sizeof(unsigned long int) * 8) - 1);
int count = 0;
if (n == 0)
{
printf("0");
return;
}
while (info > 0)
{
if ((n & info) == info)
{
printf("1");
count = 1;
}
else if (count)
{
printf("0");
}
info >>= 1;
}
}
