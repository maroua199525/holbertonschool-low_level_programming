#include "holberton.h"
/**
 *append_text_to_file - appends text at the end of a file
 *@filename: string
 *@text_content:string
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rw, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		rw = write(fd, text_content, i);
	}
	if (rw == -1)
		return (-1);
	close(fd);
	return (1);
}
