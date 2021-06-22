#include "holberton.h"
/** 
 * main - using function prototypes
 * Return: always 0
 */
void print_alphabet(void)
{
    char alpha;
for (int alpha = 97; alpha <= 122; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
return (0);
}
 