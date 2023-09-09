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
int b, c;
if (str == NULL)
{
return (NULL);
}
for (b = 1; str[b]; b++)
;
a = malloc((sizeof(char) * b) + 1);
if (a == NULL)
return (NULL);
for (c = 0; c < b; c++)
{
a[c] = str[c];
}
a[c] = '\0';
return (a);
}
