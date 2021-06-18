#include <stdio.h>
/**
 * main - printing hexadecimals
 * using only putchar
 * Return: always  0 (success)
 */
int main(void)
{
int alpha;
char lower;
for (alpha = 0; alpha < 10; alpha++)
{
putchar((alpha % 10) + '0');
}
for (lower = 97; lower < 103; lower++)
{
putchar(lower);
}
putchar('\n');
return (0);
}
