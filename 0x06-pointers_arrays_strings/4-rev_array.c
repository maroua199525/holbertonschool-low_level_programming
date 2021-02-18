#include "holberton.h"
/**
 * reverse_array - reverse an array
 *@a:integer
 *@n:integer
 * Return
 */
void reverse_array(int *a, int n)
{
	int i, T;

	i = 0;
	while (i < n / 2)
	{
		T = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = T;
		i++;
	}
}
