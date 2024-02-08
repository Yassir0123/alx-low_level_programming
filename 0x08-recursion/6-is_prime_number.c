#include "main.h"
/**
* is_prime - give n values
* @n: value
* @a: value
* Return: value
*/
int is_prime(int n, int a)
{
if (a == n)
{
return (1);
}
if (n % a == 0)
{
return (0);
}
return (is_prime(n, a + 1));
}
/**
* is_prime_number - give n values
* @n: value
* Return: value
*/
int is_prime_number(int n)
{
if (n < 0 || n == 0)
{
return (0);
}
else if (n == 1)
{
return (0);
}
else
{
return (is_prime(n, 2));
}
}
