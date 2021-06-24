#include "holberton.h"
/**
 * print_square - function that prints a square
 *
 **/
void print_square(int size)
{
int count, i; 	
for (count = 0; count < size; count++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
_putchar('\n');
}
