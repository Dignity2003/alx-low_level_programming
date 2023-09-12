#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - Prints the size of string lateral s
 * @s: The string u want to no the number of character in it
 * Return: Always 0
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
return (i);
}
/**
 * _strcpy - It copies a string to another string
 * @dest: The string u will copy it to
 * @src: The string u are copying it to
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
int len = 0, i;
while (src[len] != '\0')
{
len++;
}

for (i = 0; i < len; len++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - creates a copy of struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner
 * Return: Always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
