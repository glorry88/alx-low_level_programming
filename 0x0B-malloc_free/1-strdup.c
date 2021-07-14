#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - function
 * @str: parameter to be checked
 * Return: a pointer
 */
char *_strdup(char *str)
{
int n;
char *str2;

if (str == NULL)
{
return (NULL);
}

for (n = 0; str[n]; ++n)
;
//n++;

str2 = malloc(sizeof(char) * n);
if (str2 == NULL)
{
return (NULL);
}
for (n = 0; str[n] != '\0'; n++)
str2[n] = str[n];


str2[n] = '\0';
return (str2);
}
