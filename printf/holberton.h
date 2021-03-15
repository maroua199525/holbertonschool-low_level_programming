#ifndef PRINTF_H
#define PRINTF_H
/**
 * struct printf - Struct printf
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
int _strlen(char *s);
int _print_character(va_list c);
int _print_string(va_list *S);
int _print_integer(va_list i);
int _print_decimal(va_list d);
int _print_integer(va_list i);
int _print_binary(va_list b);
#endif /* PRINTF_H */

