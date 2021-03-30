#include "holberton.h"
/**
 *read_textfile - read a text in a file
 *@filename:string;
 *@letters:size_t
 *Return:wt
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, wt, rea;
    char *buffer = malloc(sizeof(char) * letters);

    if (filename == NULL)
        return (0);
    fd = open(filename, O_RDWR);
    if (fd == -1)
        return (0);
    if (buffer == NULL)
        return (0);
    rea = read(fd, buffer, letters);
    if (rea == -1)
        return (0);
    wt = write(STDOUT_FILENO, buffer, letters);
    if (wt == -1)
        return (0);
    close(fd);
    free(buffer);
    return (wt);
}
