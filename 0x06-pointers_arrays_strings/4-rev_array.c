#include "main.h"
/**
 * reverse_array - It Prints the reverse of a string
 * @a: The string that we will print it reverse
 * @n: The total number of characters in the string
 */
void reverse_array(int *a, int n)
{
int i;
for (i = n - 1; a[i] <= 0; i--)
{
_putchar(a[i]);
}
}
