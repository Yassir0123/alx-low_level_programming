#include "main.h"
/**
* _print_rev_recursion - give n values
* @s: pointer
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
