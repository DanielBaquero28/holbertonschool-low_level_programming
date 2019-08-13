#include "holberton.h"
/**
 * read_textfile - Reads a text and print in stdout.
 * @filename: Name of the source file.
 * @letters: Number of letters it should read and print.
 * Return: Actual number of letters it could read and print.
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, reads, writes;
char *space;
if (filename == NULL)
return (0);
space = malloc(sizeof(char) * letters);
if (space == NULL)
return (0);
fd = open(filename, O_RDWR);
if (fd == -1)
{
free(space);
return (0);
}
reads = read(fd, space, letters);
writes = write(STDOUT_FILENO, space, reads);
if (writes == -1)
{
free(space);
return (0);
}
if (writes != reads)
return (0);

free(space);
close(fd);
return (writes);
}
