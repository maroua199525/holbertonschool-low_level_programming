#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index - print the index of an array
 *@array:int
 *@size:int
 *@cmp:int
 *Return:0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, int_index;

	if (cmp == NULL)
		return (0);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array == NULL)
			return (0);
		if ((*cmp)(array[i]) != 0)
		{
			int_index = i;
			break;
		}
	}
	return (int_index);
}
