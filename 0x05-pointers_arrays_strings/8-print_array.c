#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print numbers of array
 *@a:integer
 *@n:integer
 * Return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
