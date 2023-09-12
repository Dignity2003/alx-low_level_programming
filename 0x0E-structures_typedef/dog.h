#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the name of the struct
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);
#endif
