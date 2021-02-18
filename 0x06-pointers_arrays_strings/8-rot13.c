#include "holberton.h"
/**
 * *string_toupper - uppercase the string
 *@str:string
 *Return:str;
 */
char *string_toupper(char *str)
{
	int i, j;
	char ch[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
				'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
				'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
				 'h', 'i', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
				 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == ch[j])
				str[i] = ch[j] + 13;
		}
		i++;
	}
	return (str);
}
