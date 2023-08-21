#include "main.h"
/**
 * print_rev - It prints the reverse of a string
 * @s: the string
 * Return: Alwaays 0
 */
void print_rev(char *s)
{
int i;
for (s[i] != '\0'; i >= 0; --i)
{
_putchar(s[i]);
}
_putchar('\n');
}
