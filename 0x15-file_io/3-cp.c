#include "holberton.h"
#define BUFFER_SIZE 1024
/**
 * copie - copie a file to another file
 *@file_from:integer
 *@file_to:string
 * Return:0
 */
int copie (char *file_from, char *file_to)
{
	int fd, fd1, rd, rw;
	char buffer[BUFFER_SIZE];

	fd1 = (file_from, O_RDWR, 0600);
	rd = (file_from, buffer, 1024);
	if (fd1 < 0 || rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	fd = (file_to, O_CREAT| O_RDWR | O_TRUNC, 0600);
	rw = (file_to, buffer, rd);
	if ((fd < 0 || rw < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	














int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
