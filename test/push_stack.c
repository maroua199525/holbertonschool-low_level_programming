#include "Monty.h"

/**
 * func_push - push an integer onto the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: Current file line number
 *
 * Return: void
 */
void func_push(stack_t **stack, unsigned int line_number)
{
	char *value;
	int num, check;

	value = strtok(NULL, "\n\t\r ");
	check = is_digit(value);
	if (value == NULL || check == 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = atoi(value);
	add_node(stack, num);
}
/**
* is_digit - check is an argument is digit or no
* @str: the value to check
*Return: 1 if digit 0 is not
*/
int is_digit(char *str)
{
    int i, check = 0;

    for (i = 0; str[i]; i++)
	{
		if (str[i] == '-' && i == 0)
			continue;
		if (isdigit(str[i]) == 0)
            check = 1;
    }
    return (check);
}
/**
 * add_node - Add a new node at to the stack.
 *
 * @head: Pointer to the first node of the stack.
 * @n: Element to add.
 *
 * Return: void.
 */

void add_node(stack_t **head, int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->next = NULL;
	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return;
	}

	new_node->next = *head;
	*head = new_node;
	new_node->next->prev = new_node;
}
