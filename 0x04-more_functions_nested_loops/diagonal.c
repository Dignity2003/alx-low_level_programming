#include <stdio.h>
int main(void)
{
int j, i,k = 0, n = 5;
if (n > 0)
{
for(j = 1; j <= n; j++)
{
for (i = 1; i <= j; i++)
putchar(' ');

putchar('\\');
putchar('\n');
}
}
return (0);
}
