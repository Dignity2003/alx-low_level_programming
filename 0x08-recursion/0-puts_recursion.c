#include "main.h"
/**
 * _puts_recursion - It pints a string out recursively
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
if (*s  != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
