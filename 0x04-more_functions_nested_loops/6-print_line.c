#include "holberton.h"
/**
 * print_line - print line
 *@n:integer.
 * Return;
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
			_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
