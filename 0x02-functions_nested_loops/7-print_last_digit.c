#include "main.h"
/**
 * print_last_digit - It prints the last digit of a Number
 * @n: Number that it will print its last digit
 * Return: Return n
 */
int print_last_digit(int n)
{
int c;
c = n % 10;
if (c < 0)
{
c = c * -1;
}
_putchar(c + '0');
return (c);
}
