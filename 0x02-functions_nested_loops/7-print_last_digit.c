#include "main.h"
/**
* print_last_digit - absolute value
* @c: gets the value of the parameters
* Return: returns postive if negative or returns the same value
*/
int print_last_digit(int c)
{
int a;
a = c % 10;
if (a < 0)
{
a = a * -1;
}
_putchar(a + '0');
return (a);
}
