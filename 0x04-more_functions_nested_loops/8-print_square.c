#include "holberton.h"
/**
 * print_square - print square
 *@size:integer.
 * Return;
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j <= size)
			{
				if (j != size)
				{
					_putchar('#');
				}
				else
				{
				_putchar('\n');
				}
				j++;
			}
				i++;
		}
	}
	else
	{
			_putchar('\n');
	}
}
