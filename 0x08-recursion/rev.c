#include <stdio.h>
#include "main.h"

void rev(char *s, int n)
{
if (s[n] == n--)
{
putchar('\n');
return;
}
else
{
rev((s + 1), n);
putchar(*s);
}
}

int main(void)
{
char *s = "1234567";
rev(s, 7);
return(0);
}
