#include "holberton.h"

/**
 * puts_half - puts the half
 *@str:string
 * Return: length
 */
void puts_half(char *str)
{
	int length, i;

	i = 0;
	while (str[i] != '\0')
	{
		length = length + 1;
		i++;
	}
	if (length % 2 == 0)
	{
		i = (length / 2);
		while (i <= length)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (length - 1) / 2;
		while (i <= length)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
