#include <stdio.h>

/**
* main - Prints the first 98 fibonacci numbers
*
* Return: Always 0
*/
int main(void)
{
int c, boolean, boolean2;
long int p1, p2, fp, fp2, p11, p22;

p1 = 1;
p2 = 2;
boolean = boolean2 = 1;
printf("%ld, %ld", p1, p2);
for (c = 0; c < 96; c++)
{
if (boolean)
{
fp = p1 + p2;
printf(", %ld", fp);
p1 = p2;
p2 = fp;
}
else
{
if (boolean2)
{
p11 = p1 % 1000000000;
p22 = p2 % 1000000000;
p1 = p1 / 1000000000;
p2 = p2 / 1000000000;
boolean2 = 0;
}
fp2 = (p11 + p22);
fp = p1 + p2 + (fp2 / 1000000000);
printf(", %ld", fp);
printf("%ld", fp2 % 1000000000);
p1 = p2;
p11 = p22;
p2 = fp;
p22 = (fp2 % 1000000000);
}
if (((p1 + p2) < 0) && boolean == 1)
boolean = 0;
}
printf("\n");
return (0);
}
