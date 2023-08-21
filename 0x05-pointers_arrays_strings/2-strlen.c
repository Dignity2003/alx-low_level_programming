#include "main.h"
/**
 * _strlen - It prints the length of a string
 * @s: The string
 * Return: Always success
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; ++i)
;
return (i);
}
