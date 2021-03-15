#include "holberton.h"
#include <stadlib.h>
#include <stdarg.h>
/**
 * _printf - print all (printf recreation)
 * @format: format specifier
 * Return: count
 */
int _printf(const char *format, ...)
{
	
	va_list arg;
	int (*fun)(va_list);
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (*(format + i) && format)
	{
		if (*(format + i) != '%')
		{
			_putchar (*(format + i));
			count++;
		}
		if (*(format + i) == '%')
			fun = check_char_func(*(format + (i + 1))
		if (fun != NULL)
		{
			count = count + fun(va_list);
			i = i + 2
				continue;
		}
		if (*(format + (i + 1)) == '\0')
		{	
			_putchar(*(format + i));
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
