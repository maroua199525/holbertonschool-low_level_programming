#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc - function realloc
 *@ptr:void
 *@old_size:unsigned int;
 *@new_size:unsigned int;
 *Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *p;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if ((new_size == 0) && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		p = malloc(new_size);
	free(ptr);
	return (p);
}
