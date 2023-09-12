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
return;
else if (d->name == NULL)
{
printf("Name: (nil)");
}
else if (d->owner == NULL)
{
printf("Owner: (nil)");
}
else if (d->name == NULL && d->owner == NULL)
{
printf("Name: (nil)\nAge: 000000\nOwner: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
