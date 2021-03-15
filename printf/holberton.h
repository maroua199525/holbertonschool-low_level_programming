#ifndef PRINTF_H
#define PRINTF_H
/**
 * struct op - Struct op
 *
 * @ch: The character
 * @fun: The function associated
 */

typedef struct printf
{
	char *ch;
	int (*fun)(va_list);
} printf_t;
/* functions prototypes */
int _puts_character(char ch);
int _puts_string(char *s);
int _puts_integer(va_list i);
int _puts_decimal(va_list d);
int _puts_int print_i(va_list i);
int _puts_decimal(va_list d);
int _puts_u(va_list u);
int _puts_b(va_list b);
#endif /* PRINTF_H */

