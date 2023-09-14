#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array on a newl
 * @array: The array
 * @size: The size of the array
 * @action: a function pointer
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
