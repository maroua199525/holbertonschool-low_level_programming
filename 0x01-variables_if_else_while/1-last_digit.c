#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int r;
srand(time(0));
n = rand() - RAND_MAX / 2;
r = (n % 10);
if (r > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, r);
}
else if (r == 0)
{
printf("Last digit of %d is %d\n", n, r);
}
else
{
printf("Last digit of %d is %d and is greater than 6\n", n, r);
}
return (0);
}
