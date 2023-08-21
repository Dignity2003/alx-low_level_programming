#include "main.h"
/**
 * print_rev - It prints the reverse of a string
 * @s: the string
 * Return: Alwaays 0
 */
void print_rev(char *s)
{
for (*s = '\0'; *s >= 0; --*s)
{
if (*s == '\0')
continue;
else
_putchar(*s);
}
_putchar('\n');
}
