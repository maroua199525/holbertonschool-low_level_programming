#include "holberton.h"
/**
*print_last_digit - print the last digit
*@n:integer.
*Return: 0, 1, 2, 3, 4, 5, 6, 7, 8, or 9
*/
int print_last_digit(int n)
{
int b;
b = (n % 10);
if (b < 0)
{
b = (-1) * b;
_putchar(b + '0');
}
return (b);
}

