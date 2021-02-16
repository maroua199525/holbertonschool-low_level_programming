#include "holberton.h"
/**
 * *_strcpy - copies the string
 *@src:string
 *@dest:string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	j = i;
	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
