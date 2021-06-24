#include "holberton.h"
/**
 * more_numbers - function to print 10 times numbers
 * Return: multiple numbers
 *
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar(j);
}
_putchar(i);
}
_putchar('\n');
}
