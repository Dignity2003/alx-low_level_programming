#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - it prints anything
 * @format: the format u want to be printed
 */
void print_all(const char * const format, ...)
{
va_list list;
int i = 0;
char *str, *sep = "";
va_start(list, format);
int len = strlen(format);
if (format)
{
while (i < len)
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
printf("%s%s", sep, va_arg(list, char *));
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}
printf("\n");
va_end(list);
}
