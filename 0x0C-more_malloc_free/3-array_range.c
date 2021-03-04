#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - range an array
 *@max:integer
 *@min:integer
 *Return: str;
 */
int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));


	if (a == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		a[i] = i;
	return(a);
}
