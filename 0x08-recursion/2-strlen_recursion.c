#include "main.h"
/**
 * _strlen_recursion - It Prints the length of a string
 * @s: The string
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
int c = 0;
if (*s == '\0')
{
return (0);
}
else
{
c++;
_strlen_recursion(s + 1);
}
return (c);
}
