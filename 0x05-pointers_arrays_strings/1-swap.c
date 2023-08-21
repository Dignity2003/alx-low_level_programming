#include "main.h"
/**
 * swap_int - It swaps two integers
 * @a: The first number to be swapped
 * @b: The second number to be swapped
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
_putchar(*a);
_putchar(*b);
_putchar('\n');
}
