#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar(43);
}
else if (n < 0)
{
return (-1);
_putchar(45);
}
else
{
return (0);
_putchar(48);
}
}



