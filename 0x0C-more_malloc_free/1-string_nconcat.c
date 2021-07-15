#include "holberton.h"
/**
 * *malloc_checked - function
 * @b: parameter
 */

void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);

if (ptr == 0)
{
exit(98);
return (NULL);
}
}
