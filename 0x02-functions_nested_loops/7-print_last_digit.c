#include <holberton.h>
/**
*print_last_digit - print the last digit
*@n: an integer
*Return: 0, 1, 2, 3, 4, 5, 6, 7, 8, or 9
*/
int print_last_digit(int n)
{
int a, b;
if (n < 0)
{
b = -(n % 10);
_putchar(b + '0')
}
else
{
_putchar((n % 10) + '0'))
}
}




