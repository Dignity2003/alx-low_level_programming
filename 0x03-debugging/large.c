#include <stdio.h>
int main(void)
{
int a= 12;
int b= 11;
int c= 10;
int d;
if (a > b && a > c)
printf("%d\n", a);
else if (b > a && b > c)
printf("%d\n",b);
else
printf("%d\n", c);
return (0);
}
