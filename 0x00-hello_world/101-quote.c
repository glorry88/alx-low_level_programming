#include <stdio.h>
/**
 *main - prints a string to the standard output
 *Return:1
 *Description: printing to standard output
 */
int main(void)
{
    char[] string = "and that piece of art is useful\"";
    char[] author =  " - Dora Korpar, 2015-10-19\n";
	fprintf(stderr, "%s", strcat(string, author) );
	return (1);
}
