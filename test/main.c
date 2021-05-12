#include "Monty.h"
/**
 * main - the main function.
 * @ac: arguments number.
 * @av: arguments vector.
 * Return: int.
 */
int main(int argc, char **argv)
{
	FILE *fp;
	char *line = NULL, *op_code = NULL;
	size_t n = 0;
	stack_t *stack = NULL;
	int line_number;
    
    if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	for (line_number = 1; getline(&line, &n, fp) != EOF; line_number++)
	{
		op_code = strtok(line, "\n\t\r ");
		if (op_code != NULL && op_code[0] != '#')
		{
			getfunc_monty(op_code, &stack, line_number);
        }
	}
	free_stack(&stack, fp, line);
	exit(EXIT_SUCCESS);
}
