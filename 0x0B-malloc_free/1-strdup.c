#include "main.h"
#include <stdlib.h>
/**
 * _strdup - It duplicates a string
 * @str:
 * Return: Always 0
 */
char *_strdup(char *str)
{
char *a;
int b = sizeof(*str) / sizeof(str[0]);
int i;
if (*str == '\0')
{
return ('\0');
}
a = (char *) malloc((b + 1) * sizeof (char));
for ( i = 0; i < b; i++)
{
a[i] = str[i];
}
return (a);
}
