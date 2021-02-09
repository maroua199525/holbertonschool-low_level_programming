#include "holberton.h"
/**
*print_last_digit - print the last digit
*@n: an integer
*Return: 0, 1, 2, 3, 4, 5, 6, 7, 8, or 9
*/
int print_last_digit(int n)
{
int b;
if (n < 0)
{
b = (n % 10) * (-1);
putchar(b + '0');
}
else
{
b = (n % 10);
putchar(b + '0');
}
return (b);
}

