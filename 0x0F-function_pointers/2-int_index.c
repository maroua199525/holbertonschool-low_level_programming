#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - print the index of an array
 *@array:int
 *@size:int
 *@cmp:int
 *Return:int_index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, m;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (0);
	if (array == NULL)
		return (0);
	if (size != 0 && cmp != NULL && array != NULL)
	for (i = 0; i < size; i++)
	{
		m = (*cmp)(array[i]);
		if (m != 0)
			return (i);
	}
	return (-1);
}
