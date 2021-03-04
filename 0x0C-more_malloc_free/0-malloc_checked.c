#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked -  allocates memory 
 *@b:unsigned int
 *Return
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
 
	ptr = malloc(b);
	
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
