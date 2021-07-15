#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - function to return a pointer to a 
 * two dimensional array
 * @width: first parameter
 * @height: second parameter
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
int *ptr;

for (width = 0; arr[width]; width++);
for (height = 0; arr[height]; height++);

int arr[width][height];
ptr = &arr[width][height];

if (height == 0 || width == 0 || height < 0 || width < 0)
{
return (NULL);
}

if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
