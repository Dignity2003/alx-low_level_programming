#include "main.h"
/**
 * _isdigit: Checks if a character is a digit
 * @c: character to be checked
 * Return: Always 0
 */
int _isdigit(int c)
{
if (c >= 48 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
