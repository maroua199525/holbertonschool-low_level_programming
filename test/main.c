/**
 * main - the main function.
 * @ac: arguments number.
 * @av: arguments vector.
 * Return: int.
 */
int main(int argc, char **argv)
{
	FILE *fp;
	char *line = NULL;
	size_t size = 0;
	stack_t *head = NULL;
	int line_number = 0;
    
    if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	for (line_number = 1; getline(&lineprt, &n, fd) != EOF; line_number++)
	{
		op_code = strtok(lineptr, "\n\t\r ");
		if (op_code != NULL && op_code[0] != '#')
		{
			get_func(op_code, &stack, line_number)
        }
	}
	free_list(&head, fp, line);
	exit(EXIT_SUCCESS);
}
