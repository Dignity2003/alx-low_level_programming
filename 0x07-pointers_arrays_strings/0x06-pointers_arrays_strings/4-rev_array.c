#include "main.h"
#include <string.h>
/**
 * reverse_array - It Prints the reverse of a string
 * @a: The string that we will print it reverse
 * @n: The total number of characters in the string
 */
void reverse_array(int *a, int n)
{
int i, length;
length = strlen(a);
for (a[i] = length - 1; i >= 0; i--)
{
_putchar(a[i]);
}
_putchar('\n');
}
