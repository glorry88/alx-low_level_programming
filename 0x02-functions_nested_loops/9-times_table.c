#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void){
int j = 0, i, n;
while (j <= 9){
	
for (i = 0; i <= 9; i++)
{
n = j*i;
printf("%d", n);
    	
if (i<9)
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
