#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Alway 0
 */
int main(void)
{
char *s = __FILE__;
int i = 0;
while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
return (0);
}
