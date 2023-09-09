#include "main.h"
#include <stdlib.h>
/**
 * argstostr - It concatenates all the arguments of a programm
 * @ac: The number of arguments
 * @av: Arguments
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
int ch, i, j = 0, k;
char *s;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (; av[i][j]; j++)
{
ch++;
}
j = 0;
}
s = malloc((sizeof(char) * ch) +ac + 1);
for (i = 0; av[i]; i++)
{
for (; av[i][j]; j++)
{
s[k] = av[i][j];
k++;
}
s[k] = '\n';
j = 0;
k++;
}
k++;
s[k] = '\0';
return (s);
}
