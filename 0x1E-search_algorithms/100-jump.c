#include "search_algos.h"
#include <math.h>
/**
* jump_search - searches for a value in an array of integers
* @array: an array of value
* @size:  the number of elements in arrayay
* @value: the value to search for
* Return: the indevalue of the value
*/
int jump_search(int *array, size_t size, int value)
{
    /* Finding block size to be jumped */
    size_t step = sqrt(size);
    size_t low = 0, x;
 
    /* Finding the block where element is */
    /* present (if it is present)*/
    x = fmin(step, size) - 1;
    while (array[x] < value)
    {
        low = step;
        step += sqrt(size);
        x = fmin(step, size) - 1;
        if (low >= size)
            return (-1);
    }
 
    /* Doing a linear search for value in block */
    /* beginning with low. */
    while (array[low] < value)
    {
        low++;
 
        /* If we reached nevaluet block or end of */
        /* arrayay, element is not present. */
        if (low == fmin(step, size))
            return (-1);
    }
    /* If element is found */
    if (array[low] == value)
        return low;
 
    return -1;
}