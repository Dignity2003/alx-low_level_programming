#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
char c = '0';
while (c <= '9')
{
putchar(c);
if (c != '9')
{
putchar(',');
putchar(' ');
}
else
break;
c++;
}
putchar('\n');
}
