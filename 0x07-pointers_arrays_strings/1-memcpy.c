#include "holberton.h"
/**
 * *_memcpy - copies memory area
 *@dest:string
 *@src:string
 *@n:unsigned int
 *Return:ch;
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
