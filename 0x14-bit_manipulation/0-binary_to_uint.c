#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - return the length of a string.
 * @s: parameter
 * Return: Always 0.
 **/
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
#include "holberton.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b:string;
 *Return: x
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int x = 0, k = 1;

	if (b == NULL)
		return (0);
	i = _strlen(b) - 1;
	while (i >= 0)
	{
		if (*(b + i) != '1' && *(b + i) != '0')
			return (0);
		if (*(b + i) == '1')
		{
			x = x + k;
		}
		k = k * 2;
		i--;
	}
	return (x);
}
