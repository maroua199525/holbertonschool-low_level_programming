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

	size_t i = 0, index = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;

		}
		else
		{
			index = -1;
			break;
		}
		i++;
	}
	return (index);
}
