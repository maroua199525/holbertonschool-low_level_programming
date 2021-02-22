#include "holberton.h"
/**
 * *_strstr - locates a string in a string
 *@haystack:string
 *@needle:string
 *Return:s;
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
		{
			j = 0;
			while (needle[j] != '\0')
				{
					if (haystack[i + j] == needle[j])
						{
							return (&haystack[i]);
		}
	return (0);
}
