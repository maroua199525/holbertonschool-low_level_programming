#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum the numbers
 *@n:unsigned int
 *Return:sum;
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, value, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum = sum + value;
	}
	va_end(args);
	return (sum);
}
