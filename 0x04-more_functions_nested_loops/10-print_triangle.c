#include "main.h"
/**
 * print_triangle - It prints a triangle
 * @size: size of the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = size; j >= 1; j--)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
