#include "holberton.h"
#include <stdlib.h>
/**
 *free_grid - create a string
 *:@ac:integer
 *@av:string
 *Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, l, k, n;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len] != '\0'; len++)
			;
	}
	n = 0;
	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);	
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
		{
			p[n] = av[k][l];
			n++
		}
		p[len] = '\0';
		p[n] = '\n';
	}
	return(p);
}
