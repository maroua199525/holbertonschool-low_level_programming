#include "holberton.h"
/**
 * *_strspn - strspn string
 *@s:string
 *@accept:string
 *Return:length of string
 */
unsigned int _strspn(char *s, char *accept)
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
				j = j + 1;
			}
			j++;
		}
		i++;
	}
	return (j + 1);
}
