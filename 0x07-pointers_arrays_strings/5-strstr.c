#include "holberton.h"
/**
 * *_strstr - locates a string in a string
 *@haystack:string
 *@needle:string
 *Return:Null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle == '\0')
		return (haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			return (&haystack[i]);
		}
		i++;
		j++;
	}
	return (0);
}
