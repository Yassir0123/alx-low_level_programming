#include "main.h"
#include <ctype.h>
/**
* _isdigit - checks if it's digit
* @c: parametrer that translates characters to their ASCII form
* Return: 1 if true and 0 if false
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
