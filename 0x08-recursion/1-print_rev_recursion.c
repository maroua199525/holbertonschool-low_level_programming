#include "holberton.h"
/**
 * _print_rev_recursion - print rev string
 *@s:string
 * Return
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);

	}
}
