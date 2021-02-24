#include "holberton.h"
/**
 *	factorial - print factorial
 *@n:string
 * Return:m
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

