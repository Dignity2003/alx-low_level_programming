#include "main.h"
/**
 * puts2 - It prints a string
 * @str: The string to be printed
 * Return: Always 0
 */
void puts2(char *str)
{
int i, c = 0;
for (i = 0; str[i] != '\0'; ++i)
{
c++;
if (c % 2 == 0)
{
continue;
}
else
{
_putchar(str[i]);
}
}
_putchar('\n');
}
