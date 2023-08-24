#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - it compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
if ((strcmp(s1, s2)) != 0)
return (-15);
else if ((strcmp(s2, s1)) != 0)
return (15);
else
return (0);
}
