#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked -  checked malloc
*@b:unsigned int
*Return: void
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	return (ptr);
}
