#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers
* @array: an array of value
* @size:  the number of elements in array
* @value: the value to search for
* Return: the index of the value
*/
int linear_search(int *array, size_t size, int value)
{

	size_t i = 0;
	int index = 0;

	while (i < size)
	{
		if (value == array[i])
		{
			index = i;
			break;
		}
		else
		{
			index = -1;
		}
		i++;
	}
	return (index);
}
