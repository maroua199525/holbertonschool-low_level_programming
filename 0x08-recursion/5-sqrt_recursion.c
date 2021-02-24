#include "holberton.h"
/**
 * _is_sqrt - if sqrt or no
 *@i:integer
 *@b:integer
 * Return:m
 */
int _is_sqrt(int i, int b)
{

	if ((i * i) > 0)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_is_sqrt(b, i + 1));
}
#include "holberton.h"
/**
 * _sqrt_recursion - sqrt
 *@n:integer
 * Return:m
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 1)
		return (-1);
	return (_is_sqrt(1, b));
}
