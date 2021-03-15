#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * _strlen - length of string
 *@s:string
 * Return: length
 */
int _strlen(char *s)
{
	int length, i;

	i = 0;
	while (s[i] != '\0')
		{
			length = length + 1;
			i++;
		}
	return (length);
}

/**
 * _print_char - print a char
 * @c: char
 * Return: always 1
 */
int print_c(va_list ch)
{
	char C = va_arg(c, int);

	_putchar(C);
	return (1);
}

/**
 *	_print_string - print a string
 *@s:string
 * Return: len
 */
int _print_string(va_list S)
{
	int len = 0;
	char * str = va_arg(S, char*);
	
	if (str == NULL)
		str = "(nill)";

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}

/**
 *	_puts_recursion - print string
 *@s:string
 * Return : count;
 *int _strlen(char *s)
 */
int print_r(va_list rvs)
{
	char *str;
	int i = 0, count = 0;
	
	str = va_arg(rvs, char*);
	j = _strlen(str) - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
		count++;
	}
	return (count);
}
/**
 * print_number -print number putchar
 * @n:integer
 * Return: count; 
 */
int print_integer(va_list i);
{
	int count = 0, rest = 1;
	unsigned int x;
	int n = va_arg(i, int);

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -x;
		count++;
	}
	while ((x / rest) > 9)
	{
		rest = rest * 10;
	}
	while (rest > 0)
	{
		_putchar(x / mod + '0');
		x = (x % mod);
		rest = rest / 10;
		count++;
	}
	return (count);
}
int print_binary(va_list b);
{
	int count = 0, rest = 2;
	unsigned int x;
	int n = va_arg(i, int);

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -x;
		count++;
	}
	while ((x / rest) > 0)
	{
		x = (x / rest);
	}
	while ((x / rest) > 0)
	{
		_putchar((x % rest) + '0');
		count++;
	}
	return (count);
}
#include "holberton.h"
/**
 * *rot13 - rot string
 *@s:string
 *Return:str
 */
int *rot13(va_list s)
{
	char *str = va_arg(s, int);
	int i, j;
	char ch1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
		{
			for (j = 0; j < 52; j++)
				{
					if (str[i] == ch1[j])
						{
							str[i] = ch2[j];
							break;
						}
				}
			i++;
		}
	return (i);
}
