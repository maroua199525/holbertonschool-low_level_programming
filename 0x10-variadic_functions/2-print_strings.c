#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - print strings
 *@separator:char
 *@n:unsigned int;
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg1;
	unsigned int i;
	char *str;

	va_start(arg1, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg1, char *);
		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
