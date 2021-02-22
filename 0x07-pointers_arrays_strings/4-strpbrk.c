#include "holberton.h"
/**
 * *_strpbrk - locates a string in a string
 *@s:string
 *@accept:string
 *Return:s;
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
