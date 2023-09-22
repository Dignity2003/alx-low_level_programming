#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - it adds a new nod
 * @head: pointer to a pointer to the list
 * @str: the new string to add in the mode
 * Return: it returns the address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *str2;
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
str2->next = (*head);
(*head) = str2;
return (*head);
}
