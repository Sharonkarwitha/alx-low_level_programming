#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function for creating files.
 * @filename: this a variable pointer
 * @text_content: the content file
 * Description : this is used to create files
 * Return: returns 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int x = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[x] != '\0')
	{
		x++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, x);

	return (1);
}
