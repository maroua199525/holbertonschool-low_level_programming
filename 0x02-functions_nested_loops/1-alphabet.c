#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char ch;
for (ch = '97'; ch <= '122'; ch++)
{
_putchar(ch);
_putchar('\n');
}
return;
}

