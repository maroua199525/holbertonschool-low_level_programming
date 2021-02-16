#include "holberton.h"

/**
 * _strlen - length of string
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
