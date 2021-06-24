#include "holberton.h"
/**
 * void print_diagonal - function to print diagonal line
 * Return: diagonal line
 * @n: character to be checked
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i <= n; i++)
{
_putchar('\\');
}
}
_putchar('\n');
}
