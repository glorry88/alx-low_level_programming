#include <stdio.h>
#include <string.h>
/**
 *main - prints a string to the standard output
 *Return:1
 *Description: printing to standard output
 */
int main(void)
{
char string[50]  = "and that piece of art is useful\" ";
char author[50]  = "- Dora Korpar, 2015-10-19\n";
	fprintf(stderr, "%s", strcat(string, author));
	return (1);
}
