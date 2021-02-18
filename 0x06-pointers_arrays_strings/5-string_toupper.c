#include "holberton.h"
/**
 * *string_toupper - uppercase the string
 *@str:string
 *Return:ch;
 */
char *string_toupper(char *str)
{
	int i;
	char ch;

	i = 0;
	while (str[i] != '\0')
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			if (str[i] == ch)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
