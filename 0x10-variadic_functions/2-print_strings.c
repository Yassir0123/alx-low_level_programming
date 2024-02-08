#include "variadic_functions.h"
/**
 * print_strings - info
 * @separator: info
 * @n: info
 * @...: info
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
if (n > 0)
{
va_list args;
char *current_str;
unsigned int index;
index = 1;
va_start(args, n);
printf("%s", va_arg(args, char *));
while (index < n)
{
current_str = va_arg(args, char *);
if (!current_str)
{
current_str = "(nil)";
}
if (separator)
{
printf("%s%s", separator, current_str);
}
else
{
printf("%s", current_str);
}
index++;
}
va_end(args);
}
printf("\n");
}
