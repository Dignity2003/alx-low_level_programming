#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initializes dog biography
 * @d: the first string lateral
 * @name: Dog name
 * @age: the age of the dog
 * @owner: The owner of the dog
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
