#include "main.h"
#include <string.h>
/**
 * rev_string - It reverse a string
 * @s: String to be reveresed
 * Return:Success
 */
void rev_string(char *s)
{
char rev = s[0];
int c = 0, i;
while (s[c] != '\0')
c++;
for (i = 0; i < c; i++)
{
c--;
rev = s[i];
s[i] = s[c];
s[c] = rev;
}
}
