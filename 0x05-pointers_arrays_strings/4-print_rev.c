#include "holberton.h"

/**
 * print_rev - rev the string
 *@s:a string
 * Return
 */
void print_rev(char *s)
{
	int i, j, length;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		length = length + 1;
		i++;
	}
	j = length - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
