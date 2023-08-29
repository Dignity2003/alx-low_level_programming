#include "main.h"
/**
 * _memcpy - It copies a string into another string
 * @dest: First string
 * @src: Second String
 * @n: Size of the string to be copied
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);
}
