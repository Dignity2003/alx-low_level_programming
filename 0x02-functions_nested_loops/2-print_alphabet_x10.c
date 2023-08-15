#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Prints lowercase alphabet for x10
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
char i;
int j;
for (i = 1; i <= 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
_putchar('\n');
}
}
}
