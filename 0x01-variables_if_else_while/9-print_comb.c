#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int c = 48;
while (c <= 57)
{
putchar(c);
if (c != 57)
{
putchar(',');
putchar(' ');
}
else
break;
c++;
}
putchar('\n');
return (0);
}
