#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_sub - fct
* @a: fct
* @b: fct
* Return: fct
*/
int op_sub(int a, int b)
{
int c;
c = a - b;
return (c);
}
/**
* op_add - fct
* @a: fct
* @b: fct
* Return: return
*/
int op_add(int a, int b)
{
int c;
c = a + b;
return (c);
}
/**
* op_div - fct
* @a: fct
* @b: fct
*  Return: return
*/
int op_div(int a, int b)
{
int c;
if (b == 0)
{
printf("Error\n");
}
c = a / b;
return (c);
}
/**
* op_mul - fct
* @a: fct
* @b: fct
*  Return: fct
*/
int op_mul(int a, int b)
{
int c;
c = a * b;
return (c);
}
/**
* op_mod - fct
* @a: fct
* @b: fct
* Return: fct
*/
int op_mod(int a, int b)
{
int c;
if (b == 0)
{
printf("Error\n");
exit(100);
}
c = a % b;
return (c);
}
