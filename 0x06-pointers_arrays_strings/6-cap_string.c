#include "holberton.h"
/**
 * *cap_string - uppercase the string
 *@str:string
 *Return:str;
 */
char *cap_string(char *str)
{
	int i, j;
	char ch[] = {',', '\t', '\n', ' ', ';', '.',
				 '!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ( i == 0)
			{
				str[0] = str[0] - 32;
			}
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (str[i] == ch[j])
						str[i + 1] = str[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
