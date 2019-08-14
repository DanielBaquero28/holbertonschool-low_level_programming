#include "holberton.h"

/**
 * append_text_to_file - Appends text_content at the end of filename.
 * @filename: Filename of the file that will be appended content to.
 * @text_content: Text that will be appended to a file.
 * Return: 1 if succeded else -1 (failure).
**/

int append_text_to_file(const char *filename, char *text_content)
{
int fd, writes;
if (filename == NULL)
return (-1);
fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (1);
writes = write(fd, text_content, _strlen(text_content));
if (writes == -1)
return (-1);
close(fd);
return(1);
}

/**
 * _strlen - Finds length of a string.
 * @str: Pointer that goes through the set of characters.
 * Return: String length.
**/

int _strlen(char *str)
{
int i; 
for (i = 0; str[i] != 0; i++)
{

}
return (i);
}
