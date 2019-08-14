#include "holberton.h"
#define BUFFSIZE 1024
/**
 * main - Copies the content of one file to another.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0
**/

int main(int argc, char *argv[])
{
int fd[2];
int enters, closes;
char space[BUFFSIZE];
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
fd[0] = open(argv[1], O_RDONLY);
if (fd[0] == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
fd[1] = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
if (fd[1] == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
enters = closes = 1;
while (enters)
{
enters = read(fd[0], space, BUFFSIZE);
if (enters == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
if (enters > 0)
{
closes = write(fd[1], space, enters);
if (closes == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
}
closes = close(fd[0]);
if (closes == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd[0]), exit(100);
closes = close(fd[1]);
if (closes == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd[1]), exit(100);
return (0);
}
