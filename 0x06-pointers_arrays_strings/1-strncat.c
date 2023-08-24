#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - It a specified number of charcters from one string to another
 * @dest: The string that I will add the characters to
 * @src: The string that contains the string to be added to another string
 * @n: The number of string to be added to it
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
