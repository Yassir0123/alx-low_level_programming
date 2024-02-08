#include "function_pointers.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - info of main
* @argc: data
* @argv: data
* Return: return
*/
int main(int argc, char *argv[])
{
int no, np;
int result;
char *op;
if (argc != 4)
{
printf("Error\n");
return (98);
}
no = atoi(argv[1]);
op = argv[2];
np = atoi(argv[3]);
if (strlen(op) != 1 || get_op_func(op) == NULL)
{
printf("Error\n");
return (99);
}
if ((*op == '/' || *op == '%') && np == 0)
{
printf("Error\n");
return (100);
}
result = get_op_func(op)(no, np);
printf("%d\n", result);
return (0);
}
