#include "holberton.h"
#include <strdlib.h>
#include <stdrig.h>
/**
 * print_all - prints args depending on separator
 * @format: format specifier
 * Return: int
 */
int (*check_char_func(const char *s))(va_list))
{
	int i = 0;

	_print_t put[] = {
		{'c', _print_character},
		{'s', _print_string},
		{'%', _print_string_len},
		{'d',_print_number_decimal},
		{'i',_print_number_integer},
		{'b',_print_binary},
		{0, NULL}
	};


		while (ch[i].c != NULL)
 		{
			if (ch[i].c == *s)
			{
				return (ch[i].fun());
			}
			i++;
		}
		return (NULL);
}

	
	
		


