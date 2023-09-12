#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - it frees the memorying storing dog items
 * @d: string contining all dog items
 * Return: always 0
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
