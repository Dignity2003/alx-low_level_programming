#include "lists.h"
#include <stdlib.h>
/**
 * list_len - it returns the total number of elements in a linked list
 *@h: the pointer the list_t
 *Return: number of element in h
 */
size_t list_len(const list_t *h)
{
size_t k = 0;
while (h)
{
k++;
h = h->next;
}
return (k);
}
