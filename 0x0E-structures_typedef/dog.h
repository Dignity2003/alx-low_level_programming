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
typedef struct dog dog_t;
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
#endif
