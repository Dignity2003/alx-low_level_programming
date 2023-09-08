#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Allocates Memory
 * @b: Size of memory
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
void *str;
str = malloc(b);
if (str == NULL)
{
exit(98);
}
return (str);
}
