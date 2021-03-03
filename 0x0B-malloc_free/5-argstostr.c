#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr - create a string
 *@ac:integer
 *@av:string
 *Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, k, n, s;
	char *p;

	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (s = 0; av[i][len] != '\0'; s++)
			len++;
	}
	n = 0;
	p = malloc(sizeof(char) * (len + ac + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			p[n] = av[j][k];
			n++;
		}
			p[n++] = '\n';
	}
	p[n] = '\0';
	return (p);
}
