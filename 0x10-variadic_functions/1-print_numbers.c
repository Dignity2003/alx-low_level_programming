#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - it prints number in a formatted form
 * @separator: it will be printed inbetween the integers
 * @n: Number of argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i, num;
va_start(list, n);
for (i = 0; i < n; i++)
{
num = va_arg(list, int);
if (i < n - 1 && separator != NULL)
{
printf("%d", num);
printf("%s", separator);
}
else
printf("%d", num);
}
printf("\n");
}
