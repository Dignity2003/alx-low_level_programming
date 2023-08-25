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
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] == s2[i])
{
return (0);
}
else if (s1[i] != s2[i])
{
if (s1[i] > s2[i])
{
return (s1[i] - s2[i]);
}
}
else if (s1[i] != s2[i])
{
if (s2[i] > s1[i])
{
return (s2[i] - s1[i]);
}
}
i++;
}
}
