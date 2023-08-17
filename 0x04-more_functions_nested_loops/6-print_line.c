#include "main.h"
/**
 * print_line - it prints line
 * @n: number of line to be printed
 * Return: Always 0
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
