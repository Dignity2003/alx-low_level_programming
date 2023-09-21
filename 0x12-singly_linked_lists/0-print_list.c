#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - it prints charcter
 * @h: the head of the node
 * Return: Total number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count;
for (count = 0; h != NULL; count++)
{
if (h->str == NULL)
{
printf("[0](nil)");
}
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (count);
}
