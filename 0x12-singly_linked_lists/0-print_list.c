#include "lists.h"
#include <stdio.h>
/**
 * print_list - it prints charcter
 * @h: the head of the node
 * Return: Total number of nodes
 */
size_t print_list(const list_t *h)
{
size_t total_char = 0;
for (total_char = 0; h; total_char++)
{
if (h->str == NULL)
{
printf("[0](nil)");
}
printf("[%u] %s\n", h->len, h->str);
h = h->next;
}
return (total_char);
}
