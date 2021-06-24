#include "holberton.h"
/**
 * print_line - function that draws straight line in terminal
 * Return: straight line
 *@n: number to be checked
 */
void print_line(int n)
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
_putchar('_');
}
_putchar('\n');
}
}
