#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - create an array
 *@nmemb:unsigned integer
 *@size:unsigned integer
 *Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * sizeof(unsigned int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}
	return (array);
}
