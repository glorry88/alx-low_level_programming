#include <stdio.h>
/**
 * Print the sum of multiples of 3 and 5
 * @sum: Sum of multiples
 */
int main(void)
{
int sum = 0, i = 1024;
while ( i > 0)
{
if ((i % 3 == 0) || (i % 5==0))
{
sum += i;
}
i--;
}
printf("%d", sum);
printf("\n");
return (0);
}
