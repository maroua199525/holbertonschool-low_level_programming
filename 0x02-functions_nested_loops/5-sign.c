#include "holberton.h"
/**
* print_sign - print the signe
*@n: integer
* Return: either 0, 1 or -1
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}







