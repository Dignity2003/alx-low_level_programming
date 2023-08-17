#include <stdio.h>
int _isdigit(int c);
int main(void)
{
char a = '2';
int b;
char i;
b = _isdigit(a);
printf("%c: %d\n", a, b);
for (i = 48; i < 58; i++)
{
if (i == 50 || i == 52)
continue;
else
putchar(i);
}
return (0);
}
int _isdigit(int c)
{
if (c >= 48 && c <= 58)
{
return (1);
}
else
{
return (0);
}
}

