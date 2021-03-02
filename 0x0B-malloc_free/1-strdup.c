#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - create a string
 *@str:string
 *Return: 0
 */
char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(str));
	if (p == NULL)
		return (0);
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	}
	return (p);
}
