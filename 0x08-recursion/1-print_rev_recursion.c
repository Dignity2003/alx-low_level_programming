#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - It prints the reverse of a string
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
if (!*s)
{
_putchar('\n');
return;
}
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
