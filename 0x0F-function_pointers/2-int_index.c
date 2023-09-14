#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - It searches for an integer in array
 * @array: the array
 * @size: size of element
 * @cmp: it compares a data in array with the seached data
 * Return: ALWAYS 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
