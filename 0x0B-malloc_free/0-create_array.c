#include "holberton.h"
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
char *array = malloc (sizeof(char) * size);

if (size == 0 || array == NULL)
{
return (NULL);
}

int i;
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
