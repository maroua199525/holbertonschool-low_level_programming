#include "holberton.h"

/**
 * rev_string - length of string
 *@s:a string
 * Return
 */
void rev_string(char *s)
{
	int length, i, j, ch;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		length = length + 1;
		i++;
	}
	j = length - 1;
	i = 0;
	if (length != 0)
	{
		while (i <= length / 2)
		{
			ch = s[i];
			s[i] = s[j - i];
			s[j - i] = ch;
			i++;
		}
	}
}

