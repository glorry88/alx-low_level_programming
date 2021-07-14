#include "holberton.h"
/**
 * *str_concat - function
 * @*s1: first parameter
 * @*s2: second parameter
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
char *concatstring;
int i, a;

for (i = 0; s1[i] != '\0'; ++i)
;
/* i++; */

for (a = 0; s2[a] != '\0'; ++a)
{
s1[i] == s2[a];
}
s1[i] = '\0';
/* a++; */



s1 = malloc(sizeof(char) * (a + i));

if (s1 == NULL)
{
    return (NULL);
}

return (s1);
}
