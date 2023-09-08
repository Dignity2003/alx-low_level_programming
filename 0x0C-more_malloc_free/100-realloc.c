#include "main.h"
#include <stdlib.h>

/**
 * _realloc - It reallocate a memory using malloc and free
 * @ptr: The string
 * @old_size: The previous size
 * @new_size: The new size
 * Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *numptr;
unsigned int a = 0;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
numptr = malloc(new_size);
if (numptr == NULL)
return (NULL);
return (numptr);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
numptr = malloc(new_size);
if (numptr == NULL)
return (NULL);
while (a < old_size && a < new_size)
{
numptr[a] = ((char *) ptr)[a];
a++;
}
free(ptr);
return (numptr);
}
