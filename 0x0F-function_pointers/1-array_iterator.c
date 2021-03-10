#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - print an array
 *@array:int;
 *@size:size_t;
 *@action:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
