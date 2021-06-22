#include "holberton.h"
/**
 * main - printing a string using putchar
 * Return: always 0 (success)
 */
int main(void)
{
char holberton[9] = "Holberton";
int i;
for (i = 0; i < 9; i++)
{
_putchar(holberton[i]);
}
_putchar('\n');
return (0);
}
