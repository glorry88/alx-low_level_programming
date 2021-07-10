#include "holberton.h"
/**
 * times_table - prints 9 times table
 * Return: void
 */

void times_table(void){
int j = 0, i, n;
while (j <= 9){
	
for (i = 0; i <= 9; i++)
{
n = j*i;
    	
if (n < 10)
{
_putchar(n%10 + '0');
}
else
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
if (i < 9)
{
_putchar(',');
}
		
if (n <= 9)
{
_putchar(' ');
_putchar(' ');
}
else 
{
_putchar(' ');
}	
    
}
_putchar('\n');
j++;
}
}
