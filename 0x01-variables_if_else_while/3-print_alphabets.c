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
char ch1;
char ch2;
for (ch1 = 'a' ; ch1 <= 'z' ; ch1++)
{
putchar(ch1);
}
for (ch2 = 'a' ; ch2 <= 'z' ; ch2++)
{
putchar(ch2);
}
putchar('\n');
return (0);
}
