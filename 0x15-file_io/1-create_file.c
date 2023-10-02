#include "main.h"
#include <string.h>

/**
 * create_file - This creates a file
 * @filename: This is a pointer to the file name to be created
 * @text_content:This is a pointer to a string to write a file
 * Return: 1 on success -1 on failiur.
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(file_desc, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
