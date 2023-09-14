#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - It prints strings
 * @separator: it is printed in between strings
 * @n: number of argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *str;
va_start(list, n);
for (i = 0; i < n; i++)
{
str = va_arg(list, char *);
if (str[i] == '\0')
printf("(nil)");
if (i < n - 1 && separator != NULL)
{
printf("%s", str);
printf("%s", separator);
}
else
printf("%s", str);
}
printf("\n");
va_end(str);
}
