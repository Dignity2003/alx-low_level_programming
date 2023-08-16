#include "main.h"
/**
 * times_table - Prints time table of 9
 * Return: Always 0
 */
void times_table(void)
{
int a, b;
int c = 0;
for (a = 0; a <= 9; a++)
{
b = 9 * a;
if (c == 10)
{
break;
}
else
{
_putchar(b);
_putchar(',');
_putchar(' ');
}
c++;
}
_putchar('\n');
}
