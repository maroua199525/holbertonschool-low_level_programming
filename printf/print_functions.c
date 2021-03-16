#include "holberton.h"
/**
 * _print_character - print a char
 * @arg: argument of type va_list
 * Return: always 1
 */
int print_character(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	_putchar(ch);
	return (1);
}
/**
 *_print_string - print a string
 *@arg: argument of type va_list
 * Return: len
 */
int print_string(va_list arg)
{
	int len = 0;
	char *str;
	
	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(null)";

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}
/**
 *_print_rev_string - print reverse string
 *@arg: argument of type va_list
 * Return :count
 */
int print_rev_string(va_list arg)
{
	char *str;
	int i = 0, count = 0, len;
	
	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(llun(";
	for (i = 0; str[i] != '\0'; i++)
		;
	len = i - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
		count++;
	}
	return (count);
}
/**
 * print_number -print number putchar
 * @arg: argument of type va_list
 * Return: count; 
 */
int print_integer(va_list arg)
{
	int count = 0, rest = 1;
	unsigned int x;
	int n = va_arg(arg, int);

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
		_putchar(x / rest + '0');
		x = (x % rest);
		rest = rest / 10;
		count++;
	}
	return (count);
}
/**
 * _print_rot13 - print rot string
 *@arg: argument of type va_list
 *Return:str
 */
int print_rot13(va_list arg)
{
	char *str = va_arg(arg, int);
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
				_putchar(str[i]);
				break;
			}
		}
		i++;
	}
	return (i);
}
/**
 *_print_percent - print_percent
 *@arg:argument of type va_list
 * Return:1
 */
int print_percent(va_list arg)
{
	(void)arg;

	_putchar('%');
	return (1);
}
