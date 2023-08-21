#include "main.h"
#include <string.h>
/**
 * print_rev - It prints the reverse of a string
 * @s: the string
 * Return: Alwaays 0
 */
void print_rev(char *s)
{
int i, lenth;
lenth = strlen(s);
for (i = lenth - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
