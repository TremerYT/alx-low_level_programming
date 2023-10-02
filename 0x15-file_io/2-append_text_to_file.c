#include "main.h"
#include <string.h>

/**
 * append_text_to_file - This appends text to file.
 * @filename: This is a pointer to a file namei.
 * @text_content: This is the string to add at end of line
 *
 * Return: not exist or null --1 otherwise -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
	{
		return (-1);
	}

	bytes_written = write(file_desc, text_content, strlen(text_content));
	close(file_desc);

	if (bytes_written == -1)
	{
		return (-1);
	}

	return (1);
}


