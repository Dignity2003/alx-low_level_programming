#include "main.h"
#include <stdlib.h>
/**
 * _strdup - It duplicates a string
 * @str: The string to be duplicated
 * Return: Always 0
 */
char *_strdup(char *str)
{
char *a;
int b = sizeof(*str) / sizeof(str[0]);
if (*str == '\0')
{
return ('\0');
}
a = (char *) malloc((b + 1) * sizeof(char));
for (b = 0; str[b] != '\0'; b++)
{
a[b] = str[b];
}
return (a);
}
