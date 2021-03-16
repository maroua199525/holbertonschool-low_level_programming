#ifndef PRINTF_H
#define PRINTF_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 *format_specifier - defines a structure for format
 * struct printf - Struct printf
 * @ch: The character
 * @fun: The function associated
 */
typedef struct printf
{
	char c;
	int (*fun)(va_list);
} printf_t;
/* functions prototypes */
int check_char_func(const char s, va_list ap);
int _printf(const char *format, ...);
int _putchar(char c);
/* functions prototypes conversion */
int print_character(va_list arg);
int print_percent(va_list arg);
int print_string(va_list arg);
int print_integer(va_list arg)
nt print_rev_string(va_list arg)
int print_rot13(va_list arg);
#endif /* PRINTF_H */
