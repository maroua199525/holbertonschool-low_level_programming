#include "holberton.h"
/**
 * factorial - print factorial
 *@n:integer
 * Return:m
 */
int factorial(int n)
{
	int m;

	if ((n - 1) < 0)
		return (0);
	if ((n - 1) == 0)
		m = 1;
	else
		m = ((n - 1) * factorial(n - 2));
	if ((m + 1) % n == 0)
		return (1);
	else
		return (0);
}
#include "holberton.h"
/**
 * is_prime_number - print factorial
 *@n:integer
 * Return:m
 */
int is_prime_number(int n)
{
	return (factorial(n));
}
