#include <stdio.h>

int main ()
{
int sum = 0, i = 1024;
while(i>0)
{
if((i%3 == 0) || (i%5==0))
{
sum += i;
}
i--;
}
printf("%d", sum);
printf("\n");
return 0;
}
