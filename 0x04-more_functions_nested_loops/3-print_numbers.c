#include "holberton.h"
/** 
 * void print_numbers(void) - prints numbers using _putchar
 * Return: 0 always
 */
void print_numbers(void){
int i;
for (i = 0; i <= 9; i++){
_putchar(i + '0');
}
_putchar('\n');
}