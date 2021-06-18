#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
char alpha;
for (alpha = 122; alpha >= 97; alpha--)
putchar(alpha);
putchar('\n');
return (0);
}
