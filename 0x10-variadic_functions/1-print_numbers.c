#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - print numbers
 *@separator:char
 *@n:unsigned int;
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg1;
	unsigned int i, j, value1;
	
	if (n == 0)
		return;
	va_start(arg1, n);
	for (i = 0; i < n; i++)
	{
		value1 = va_arg(arg1, const unsigned int);
		printf("%d", value1);
		for (j = 0; j < n - 2; j++)
		{
			if ((j % 2) != 0)
			printf("%s", separator);
		}
	}
		printf("\n");
}
		
