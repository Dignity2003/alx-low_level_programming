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
while (!= NULL)
{
if (h->str == NULL)
{
printf("[0](nil)");
}
else
{
printf("[%u] %s\n", h->len, h->str);
h = h->next;
total_char++;
}
}
return (total_char);
}
