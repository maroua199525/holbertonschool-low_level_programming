#include "holberton.h"
/**
 * swap_int - swap int
 *@a:integer
 *@b:integer
 * Return;
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

