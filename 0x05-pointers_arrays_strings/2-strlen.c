#include "holberton.h"

/**
 * _strlen - length of string
 *@s:a character
 * Return: length
 */
int _strlen(char *s)
{
	int length, i;

	i = 0;
	while (s[i] != '\0')
	{
		length = length + 1;
		i++;
	}
	return (length);
}
