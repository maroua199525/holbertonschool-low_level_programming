#include "Monty.h"
/**
 * getfunc_monty - Find the function to the opcode and execute it.
 *
 * @op_code: Opcode to check and execute.
 * @stack: Pointer to the begin of the stack.
 * @line_number: Current line number interpreted.
 * Return: void
 */
void getfunc_monty(char *op_code, stack_t **stack, unsigned int line_number)
{
    size_t i = 0;
    instruction_t code[] = {
        {"push", func_push},
		{"pall", func_pall},
		{"pint", func_pint},
		/*{"pop", func_pop},*/
		{"swap", func_swap},
		{"add", func_add},
		{"nop", func_nop},
		{"sub", func_sub},
		/*{"div", func_div},
		{"mul", func_mul},
		{"mod", func_mod},
		{"pchar", func_pchar},
		{"pstr", func_pstr},
		{"rotl", func_rotl},
		{"rotr", func_rotr},*/
		{NULL, NULL}
	};
    while (code[i].opcode != NULL)
    {
        if (strcmp(code[i].opcode, op_code) == 0)
		{
			code[i].f(stack, line_number);
			return;
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op_code);
	exit(EXIT_FAILURE);
}
