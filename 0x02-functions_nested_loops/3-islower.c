#include "main.h"
/**
 * _islower - Prints only lowercase character
 * @c: the charcter to be checked
 * Return: Success
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
