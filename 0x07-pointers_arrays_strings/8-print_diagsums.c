#include "holberton.h"
/**
 * print_diagsums - print diagsums
 *@a:integer
 *@size:integer
 *Return:
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i][size - 1 - i];
		sum2 = sum2 + a[size - 1 - i][size - 1 - i];
	}
}
