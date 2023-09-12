#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a copy of struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner
 * Return: Always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *user;

user = malloc(sizeof(dog_t));
if (user == NULL)
{
return (NULL);
}
user->name = name;
user->age = age;
user->owner = owner;
return (user);
}
