#include "holberton.h"
/**
* print_times_table - print the table of nine
* @n:integer.
* Return: Always 0.
*
*/
void print_times_table(int n)
{
	int r, i, j;

	if (!(n > 15) || (n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = (i * j);
				if (j == 0)
				{
					_putchar('0');
				}
				else if (r < 10)
				{
					_putchar(' ');
					_putchar(r + '0');
				}
				else
				{
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar ('\n');
				}
			}
		}
	}
}
