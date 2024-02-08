#include "main.h"
/**
* print_sign - checks if lowercase or upercase
* @n: gets the number
* Return: 1 if pos and 0 if null and -1 if neg
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
