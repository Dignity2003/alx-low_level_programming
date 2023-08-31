#include "main.h"

/**
 * _pow_recursion - It prints a the result of a raise to power
 * @x: The base number
 * @y: the power number
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
