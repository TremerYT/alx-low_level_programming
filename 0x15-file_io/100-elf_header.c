#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check_elf - This checks if the file is an ELF file.
 * @e_ident: This is a pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		return (98);
	}

	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Can't read ELF header from file %s\n", argv[1]);
		close(fd);
		return (98);
	}

	print_elf_header_info(&header);
	close(fd);
	return (0);
}

void print_elf_header_info(Elf64_Ehdr *header)
{

