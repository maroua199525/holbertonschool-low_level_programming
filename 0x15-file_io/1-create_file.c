#include "holberton.h"
/**
 *create_file - create a new file
 *@filename:string
 *@text_content: string
 *Return:1 or -1
 */
int create_file(const char *filename, char *text_content)
{
    int fd, wr, length;

    for (length = 0; text_content[length] != '\0'; length++)
        ;
    if (filename == NULL)
        return (-1);
    fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
    if (fd == -1)
        return (-1);
    if (text_content != NULL)
    {
        wr = write(fd, text_content, length);
    }
    if (wr == -1)
        return (-1);
    close(fd);
    return (1);
}
