#include <stdio.h>

/**
* main - Prints the add of the even-valued
* fibonacci numbers
*
* Return: Always 0
*/
int main(void)
{
long int p1, p2, fp, afp;

p1 = 1;
p2 = 2;
fp = afp = 0;
while (fp <= 4000000)
{
fp = p1 + p2;
p1 = p2;
p2 = fp;
if ((p1 % 2) == 0)
{
afp += p1;
}
}
printf("%ld\n", afp);
return (0);
}
