#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - It prints
 * @d: the string for struct
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
if (d == NULL)
{
printf("nil\n");
}
else if (d->name == NULL)
{
printf("nil\n");
}
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}