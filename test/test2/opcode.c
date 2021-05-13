#include "monty.h"
/**
 *get_opcode - get the opcode of a Monty file 
 *
 *Return: pointer to a string containing the opcode
 */
char *get_opcode(void)
{
	int i = 0, j = 0;
	char *buffer;

	buffer = malloc(sizeof(char) * 10);
	if (buffer == NULL)
		return (NULL);

	while (line[i] == ' ')
		i++;
	while (line[i] != ' ' && line[i] != '\0')
	{
		buffer[j] = line[i];
		i++;
		j++;
	}
	buffer[j] = '\0';
	return (buffer);
}