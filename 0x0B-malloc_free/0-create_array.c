#include "main.h"
#include <stdlib.h>
/**
 * create_array - it set a paticular character to an array
 * @size: The size of the array
 * @c: The character
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i = 0;
a = malloc((size + 1) * sizeof(char));
if (*a == '\0')
{
return (0);
}
while (i < size)
{
a[i] = c;
i++;
}
a[i] = '\0';
return (a);
}
