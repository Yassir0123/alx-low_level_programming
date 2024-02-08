#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - info
 * @format: info
 * @...: info
 */
void print_all(const char * const format, ...)
{
va_list args;
char *separator;
int index;
va_start(args, format);
separator = "";
index = 0;
while (format && format[index])
{
switch (format[index])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
printf("%s%s", separator, (str ? str : "(nil)"));
}
break;
default:
index++;
continue;
}
separator = ", ";
index++;
}
printf("\n");
va_end(args);
}
