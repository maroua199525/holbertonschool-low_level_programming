#include "holberton.h"
/**
 *	_strlen_recursion - print length
 *@s:string
 * Return: m
 */
int _strlen_recursion(char *s)
{
	int m;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		m = 1 + _strlen_recursion(s + 1);
	}
	return (m);
}
