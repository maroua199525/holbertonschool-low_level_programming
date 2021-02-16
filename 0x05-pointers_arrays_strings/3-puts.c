#include "holberton.h"

/**
 * _puts - put a string
 *@str:a string
 * Return
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
