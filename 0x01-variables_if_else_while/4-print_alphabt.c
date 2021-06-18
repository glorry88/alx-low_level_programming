#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabet s without q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha = 97;
while (alpha <= 122)
{
if (alpha == 101 || alpha == 113)
{
alpha++;
continue;
}
putchar(alpha);
alpha++;
}
printf("\n");
return (0);
}
