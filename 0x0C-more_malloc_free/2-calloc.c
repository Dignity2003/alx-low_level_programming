#include "main.h"
#include <stdlib.h>
/**
 * _calloc - It Allocates a Memory for an array
 * @nmemb: The number of bites
 * @size: the size of the array
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int a, b = 0;
char *str;
if (nmemb == 0 || size == 0)
return (NULL);

b = nmemb * size;
str = malloc(b);

if (str == NULL)
return (NULL);

for (a = 0; a < b; a++)
str[a] = 0;

return (str);
}
