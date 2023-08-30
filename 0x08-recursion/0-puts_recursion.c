#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion - It pints a string out recursively
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
int i = strlen(s);
if (s[i] == '\0')
{
return;
}
else
{
_putchar(s[i]);
i++;
_puts_recursion(&s[i]);
}
}
