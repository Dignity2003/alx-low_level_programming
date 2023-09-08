#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - It concatenates Two strings
 * @s1: 1st strin
 * @s2: 2nd string
 * @n: The Size
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b, c = 0, d;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (a = 0; s1[a]; a++)
;
for (b = 0; s2[b]; b++)
;
if (n >= b)
c = a + b;
else
c = a + n;
str = malloc(sizeof(char) * c + 1);
if (str == NULL)
return (NULL);
b = 0;
for (d = 0; d < c; d++)
{
if (d <= a)
str[d] = s1[d];
if (d >= a)
{
str[d] = s2[b];
b++;
}
}
str[d] = '\0';
return (str);
}
