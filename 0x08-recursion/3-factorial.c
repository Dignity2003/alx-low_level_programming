#include "main.h"

/**
 * factorial - It prints the factorial of a number n
 * @n: The number that we want to find it factorial
 * Return: Always 0
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
