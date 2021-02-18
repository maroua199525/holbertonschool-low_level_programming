#include "holberton.h"
/**
 * *rot13 - rot string
 *@str:string
 *Return:str
 */
char *rot13(char *str)
{
	int i, j;
	char ch1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == ch1[j])
			{
				str[i] = ch2[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
