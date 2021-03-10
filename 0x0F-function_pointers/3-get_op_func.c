#include "function_pointers.h"
#include <stdio.h>
/**
 *get_op_func - get function
 *@s:char;
 *Return: s
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
	i = 0;
	while (ops[i].op != NULL)
	{
		if (s != opt_t ops[i])
			return (NULL);
		i++;
	}
	return (get_op_func(s));
}
