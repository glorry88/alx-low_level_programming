#include "holberton.h"
/**
 * print_alphabet - using function prototypes
 * Return: always 0
 */
void print_alphabet(void)
{
char alpha;
int i;
while(i <= 10)
{
for (alpha = 97; alpha <= 122; alpha++)
{
_putchar(alpha);
}
i++;
}
_putchar('\n');
}
