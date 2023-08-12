#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a, b, c = '0';
for (a = '0'; a <= '9'; a++)
{
for (b = c; b <= '9'; b++)
{
if (a != b)
{
putchar(a);
putchar(b);
}
if (a == b)
{
continue;
}
else if (a == '8' && b == '9')
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
c++;
}
putchar('\n');
return (0);
}
