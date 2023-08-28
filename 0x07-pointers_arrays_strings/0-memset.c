#include "main.h"

/**
 * _memset - It stores a particular character to a particular memory
 * @s: The string
 * @b: The character
 * @n: Number of bytes that the character would consume
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n - 1; i++)
{
s[i] = b;
}
return (s);
}
