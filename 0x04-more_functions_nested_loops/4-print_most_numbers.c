#include "main.h"
/**
 * print_most_numbers - It prints number from 0 to 9 except 2 and 9
 * Return: Always 0
 */
void print_most_numbers(void)
{
char i;
for (i = 48; i <= 57; i++)
{
if (i == 50 || i == 52)
{
continue;
}
else
{
_putchar(i);
}
}
_putchar('\n');
}
