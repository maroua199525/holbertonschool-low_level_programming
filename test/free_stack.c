#include "Monty.h"

/**
 * free_stack - Frees the stack.
 * @head: head of the stack
 * @fp: file 
 * @line: line 
 * Return: void
 */
void free_stack(stack_t **head, FILE *fp, char *line)
{
	stack_t *ptr;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	free(*head);
	fclose(fp);
	free(line);
}