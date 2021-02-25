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
#include "holberton.h"
/**
 *is_palind_drome - print length
 *@s:string
 *@m:integer
 *@j:integer
 * Return: m
 */
int is_palind_drome(char *s, int m, int j)
{
	if (*s == '\0')
		return (1);
	else if (s[j] == s[m - j] && j == m / 2)
		return (1);
	else if (s[j] == s[m - j])
		return (is_palind_drome(s, m, j + 1));
	else
		return (0);
}
#include "holberton.h"
/**
 *	is_palindrome - palindrome
 *@s:string
 * Return: m
 */
int is_palindrome(char *s)
{
	int m = _strlen_recursion(s);

	return (is_palind_drome(s, m - 1, 0));
}
