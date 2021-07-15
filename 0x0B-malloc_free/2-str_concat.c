#include "holberton.h"
#include <stdlib.h>
/**
 * *str_concat - function
 * @*s1: first parameter
 * @*s2: second parameter
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{

int i, a, k;
char *s;

if (s1 != NULL){
for (i = 0; s1[i]; i++)
;
}

if (s2 != NULL){
for (a = 0; s2[a]; a++)
;
}

s = malloc(sizeof(char) * (a + i + 1));

if (s == NULL)
{
    return (NULL);
}
for (k = 0; k < i; k++)
{
s[k] = s1[k];
		
}

for (k = 0; k < i + a; k++)
{
	s[k] = s2[k - i];
}

s[k] = '\0';

return (s);
}
