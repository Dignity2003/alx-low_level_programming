#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to a pointer to the list_t list
 * @str: string to add the new node
 * Return: the new elements address
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *str2;
list_t *temp = *head;
unsigned int len;
for (len = 0; str[len]; len++)
;
str2 = malloc(sizeof(list_t));
if (str2 == NULL)
{
return (NULL);
}
str2->str = strdup(str);
str2->len = len;
str2->next = NULL;
if (*head == NULL)
{
*head = str2;
return (str2);
}
while (temp->next)
temp = temp->next;
temp->next = str2;
return (str2);
}
