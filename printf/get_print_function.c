#include "holberton.h"
#include <stdlib.h>
/**
 * print_all - prints args depending on separator
 * @format: format specifier
 * Return: int
 */
int check_char_func(const char s, va_list ap)
{
	int i = 0;

	printf_t ch[] = {
		/**{"c", print_character},
		{"s", print_string},
		{"%", print_string_len},
		{"d", print_number_decimal},
		   {"i", print_number_integer},
		   {"b", print_binary},
		   {"r", print_rev_string},*/
		{NULL, NULL}
	};


		while (ch[i].c != NULL)
 		{
			if (ch[i].c == s)
			{
				return (ch[i].fun(ap));
			}
			i++;
		}
		return (0);
}

	
	
		


