#include "holberton"
/** 
 * void print_most_numbers(void) - prints numbers and skip some
 * Return: 0 always
 */
void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++){
if ( i == '2' || i == '4')
{
continue;
}
_putchar(i);
}
_putchar('\n');
}
