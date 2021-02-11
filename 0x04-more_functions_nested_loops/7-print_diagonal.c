#include "holberton.h"
/**
 * print_diagonal - print diagonal
 *@n:integer.
 * Return;
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
