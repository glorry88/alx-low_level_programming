#include "holberton.h"
/**
 * print_rev - print string in reverse
 * @s: parameter
 * Return: 0
 */
void print_rev(char *s)
{
int i;
for (i = 0; s[i] < '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
