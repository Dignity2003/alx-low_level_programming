#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - it sum all the integer entered
 * @n: The number of integer that will be summed together
 * Return:Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int i, sum = 0;
va_start(list, n);
for (i = 0; i < n; i++)
{
sum += va_arg(list, int);
}
return (sum);
va_end(list);
}
