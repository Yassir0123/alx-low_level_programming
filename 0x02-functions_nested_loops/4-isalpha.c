#include "main.h"
/**
* _isalpha - checks if lowercase or upercase
* @c: parametrer that translates characters to their ASCII form
* Return: 1 if true and 0 if false
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
