#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This reads the text file and prints to STDOUT
 * @filename: this is the pointer to file being read
 * @letters: This is the number of letters to be read
 * Return: Should return actuall number of bytes read
 * and printed 0 when function fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_desc;
	ssize_t w;
	ssize_t t;

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(file_desc, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(file_desc);
	return (w);
}
