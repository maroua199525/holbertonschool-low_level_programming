#include "holberton.h"
/**
 * *_memset - fills memory with a constant byte
 *@s:char
 *@b:constant byte
 *@n:unsigned int
 *Return:pointer to a memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
