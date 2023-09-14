#include "main.h"
#include <stdio.h>

/**
 * print_name - it print namme using function pointers
 * @name: string to add
 * @f: the function pointer
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
f(name);
}
}
