#include "holberton.h"
/**
 * rev_string - length of string
 *@s:a string
 * Return
 */
void rev_string(char *s)
{
	int i, j;
	char ch;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	{
		while (j <= (i -1) / 2)
		{
			ch = s[j];
			s[j] = s[i - 1 - j];
			s[i - 1 - j] = ch;
			j++;
		}
	}
}

