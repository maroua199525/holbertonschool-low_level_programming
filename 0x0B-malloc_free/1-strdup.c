#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - create a string
 *@str:string
 *Return: 0
 */
char *_strdup(char *str)
{
	int i, len;
	char *p;

	len = 0;
	while (str[len] != '\0')
		len++;

	if (str == NULL)
		return (NULL);
	p = malloc(len * sizeof(char));
	if (p == NULL)
		return (0);
	else
	{
		for (i = 0; i < len; i++)
			p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
