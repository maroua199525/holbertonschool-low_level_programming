B#include "lists.h"
void __attribute__((constructor)) f_print(void);

/**
 *f_print - prints  before the main function
 *
 *Return: void
 */

void f_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
