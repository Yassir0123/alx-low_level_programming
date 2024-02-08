#include "variadic_functions.h"
/**
 * print_numbers - set
 * @separator: set
 * @n: set
 * @...: set
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
if (n > 0)
{
va_list args;
va_start(args, n);
printf("%d", va_arg(args, int));
for (i = 1; i < n; i++)
{
if (separator)
{
printf("%s%d", separator, va_arg(args, int));
}
else
{
printf("%d", va_arg(args, int));
}
}
va_end(args);
}
printf("\n");
}
