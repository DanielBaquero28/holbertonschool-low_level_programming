#include "holberton.h"
/**
 * create_file - Creates a file.
 * @filename: Name of the created file.
 * @text_context: Null terminated string that will be written in the new file.
 * Return: 1 if succeds else -1.
**/

int _strlen(char *str);

int create_file(const char *filename, char *text_content)
{
int fd, writes;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
return (1);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (1);
writes = write(STDIN_FILENO, filename, _strlen(text_content));
if (writes == -1)
return (-1);
close(fd);
return (1);
}

/**
 * strlen - Finds length of a string.
 * @str: Pointer that goes through the set of characters.
 * Return: String length.
**/

int _strlen(char *str)
{
int i;
for (i = 0; i < str[i]; i++)
{

}
return (i);
}
