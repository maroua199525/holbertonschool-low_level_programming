#include "search_algos.h"

/**
* binary_search - searches for a value in an array of integers
* @array: an array of value
* @size:  the number of elements in array
* @value: the value to search for
* Return: the index of the value
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t index_mid, i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		index_mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[index_mid] == value)
		{
			return (index_mid);
		}
		else if (array[index_mid] > value)
		{
			right = index_mid - 1;
		}
		else
		{
			left = index_mid + 1;
		}
	}
	return (-1);
}
