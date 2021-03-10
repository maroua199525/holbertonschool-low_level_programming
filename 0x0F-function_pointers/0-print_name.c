#include "function_pointers.h"
/**
 *print_name - print name
 *@name:char
 *@f:void
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
