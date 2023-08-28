#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copies a specified number of characters to a string
 * @dest: The string that i want to copy another string to
 * @src: The strin to be copied to another string
 * @n: numbr of characters to be copied to another string
 * Return: Always success
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
