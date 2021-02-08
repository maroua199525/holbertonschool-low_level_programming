#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <holberton.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
return;
}
