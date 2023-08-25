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
int i;
i = strcmp(s1, s2);
if (i == 0)
return (0);
if (i != 0)
return (i);
}
