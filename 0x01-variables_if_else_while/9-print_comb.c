#include <stdio.h>
#include <stdlib.h>
/**
 * main - printint hexadecimals
 * Return: always 0 (success)
 */
int main(void)
{
int alpha;
for (alpha = 0; alpha <= 9; alpha++)
{
putchar((alpha % 10) + '0');
if (alpha == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
}
