#include "Monty.h"

/**
 * push - pushes an element to the stack.
 * @stack: stack
 * @line_number: line number in monty file
 * Return: void
 */
void func_push(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *new_stack;
	char *argv = NULL;
    int element = atoi(argv);

	new_stack = malloc(sizeof(stack_t));
	if (new_stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new_stack->n = element;
	new_stack->prev = NULL;
	new_stack->next = NULL;
	if (*stack != NULL)
	{
		new_stack->next = *stack;
		(*stack)->prev = new_stack;
	}
	*stack = new_stack;
}
/**
 * pall - print all data in stack
 * @stack: stack
 * @line_number: line number in monty .m file
 * Return: void
 */
void func_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void) line_number;
    tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
/**
 * pint - prints the value at the top of the stack,
 * @stack: stack
 * @line_number: line number in monty .m file
 * Return: void
 */
void func_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
    
    ptr = *stack;
    if (ptr == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", ptr->n);
}
/**
 * _nop - doesn’t do anything.
 * @head: linked list'head address.
 * @line_number: line number of line we're reading.
 * Return: nothing
 */

void func_nop(stack_t **head, unsigned int line_number)
{
	(void)head;
	(void)line_number;
}

/**
 * swap - swaps the top two elements of the stack.
 * @stack: Pointer to the begin of the stack.
 * @line_number: line number of the opcode being executed.
 */
void func_swap(stack_t **stack, unsigned int line_number)
{
	int num;

	if ((*stack)== NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = num;
}