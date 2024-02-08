#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculates the sum
 * @n: res
 * Return: res
 */
int sum_them_all(const unsigned int n, ...)
{
int result;
unsigned int index;
va_list args;
result = 0;
if (n > 0)
{
va_start(args, n);
for (index = 0; index < n; index++)
{
result += va_arg(args, int);
}
va_end(args);
}
return (result);
}
