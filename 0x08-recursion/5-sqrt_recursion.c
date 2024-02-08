#include "main.h"
/**
* _sql - give sql
* @n: number
* @a: number
* Return: value
*/
int _sql(int n, int a)
{
if (a * a == n)
{
return (a);
}
else if (a * a > n)
{
return (-1);
}
return (_sql(n, a + 1));
}
/**
* _sqrt_recursion - give sqrt
* @n: number
* Return: value
*/
int _sqrt_recursion(int n)
{
return (_sql(n, 1));
}
