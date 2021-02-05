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
int i;
int j;
int k;
for (i = 48; i <= 55; i++)
{
for (j = 49; j <= 56; j++)
{
for (k = 50; k <= 57; k++)
{
if ((i < j) && (j < k))
{
putchar (i);
putchar (j);
putchar (k);
if ((i == 55) && (j == 56) && (k == 57))
{
putchar ('\n');
}
else
{
putchar (',');
putchar (' ');
}
}
}
}
}
return (0);
}
