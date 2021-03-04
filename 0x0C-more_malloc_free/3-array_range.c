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
	int i, k = 0;
	int *a;

	if (min > max)
		return (NULL);
	a = malloc((max - min) * sizeof(int));


	if (a == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		a[k] = i;
		k++;
	}
	return(a);
}
