#include "holberton.h"
/**
 * _strlen - function to print to print a string
 * @s: string parameter
 * Return: string followed by new line
 */
int _strlen(char *s)
{
int i;
for (i = 0; s != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
