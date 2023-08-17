#include <stdio.h>
int main(void)
{
int i, j, k;
for (k = 0; k <= 10; k++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
putchar((i / 10) + '0');
}
putchar((i % 10) + '0');
}
putchar('\n');
}
return(0);
}
