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
char ch;
for (i = 48 ; i < 58 ; i++)
{
putchar(i);
}
for (ch = 'a' ; ch < 'g' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
