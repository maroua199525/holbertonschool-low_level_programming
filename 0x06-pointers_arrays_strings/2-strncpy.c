#include "holberton.h"
/**
 * *_strncpy - copies the string
 *@src:string
 *@dest:string
 *@n:integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
