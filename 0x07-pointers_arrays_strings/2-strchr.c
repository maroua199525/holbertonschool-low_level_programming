#include "holberton.h"
/**
 * *_strchr - locates a character in a string
 *@s:string
 *@c: caracter
 *Return:s;
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
