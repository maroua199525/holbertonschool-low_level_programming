#include "holberton.h"
/**
 * *_strspn - strspn string
 *@s:string
 *@accept:string
 *Return:length of string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;
	
	k = 0;
	i = 0;
	while (s[i] != '\0' && s[i] != ' ')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = k + 1;
			}
			j++;
		}
		i++;
	}
	return (k);
}
