#include "Monty.h"
/**
 * add -  adds the top two elements of the stack.
 * @stack: Pointer to the begin of the stack.
 * @line_number: line number of the opcode being executed.
 */
void func_add(stack_t **stack, unsigned int line_number)
{
	int sum = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
        fprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", line_number);
		exit (EXIT_FAILURE);
	}

	sum = ((*head)->n) + (((*head)->next)->n);
	(*head)->n = sum;
}
/**
 * _sub - subtracts the top element of the stack from the second top element of the stack
 * @stack:Pointer to the begin of the stack.
 * @line_number: line number from file.
 * Return: nothing
 */
void func_sub(stack_t **stack, unsigned int line_number)
{
	int sub = 0;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(STDERR_FILENO, "L%d: can't sub, stack too short\n", line_number);
		exit (EXIT_FAILURE)
	}

	sub = (((*head)->next)->n) - ((*head)->n);
	(*head)->n = sub;
}
