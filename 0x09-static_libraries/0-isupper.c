#include "main.h"
#include <ctype.h>
/**
* _isupper - checks if it's upercase
* @c: parametrer that translates characters to their ASCII form
* Return: 1 if true and 0 if false
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
