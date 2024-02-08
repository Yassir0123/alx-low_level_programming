#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
* get_op_func - info
* @s: info
* Return: info
*/
int (*get_op_func(char *s))(int, int)
{
int i;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
i = 0;
while (ops[i].op != NULL)
{
if (strcmp(ops[i].op, s) == 0)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
