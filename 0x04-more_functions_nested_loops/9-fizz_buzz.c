#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("%s", "Fizz ");
continue;
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("%s", "Buzz ");
continue;
}		
else if (i % 3 == 0 && i % 5 == 0)
{
printf("%s", "FizzBuzz ");
continue;
}		
printf("%d",i);
printf(" ");
}
putchar('\n');
return 0;
}
