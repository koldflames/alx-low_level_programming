#include "main.h"

/**
 * main - reads the header of an ELF and checks whether it is a valid ELF file or not
 * @argc: this is the argument that is checked
 * @argv: this is the argument that is passed
 */
int main(int argc, char *argv[])
{
	int fd;
	char elf_header[16];
	ssize_t nread;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	nread = read(fd, elf_header, 16);

	if (nread != 16)
	{
		fprintf(stderr, "Error: Not an ELF file - it has the wrong magic bytes at the start\n");
		close(fd);
		exit(EXIT_FAILURE);
	}

	if (memcmp(elf_header, ELF_MAGIC_BYTES, 4) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file - it has the wrong magic bytes at the start\n");
		close(fd);
		exit(EXIT_FAILURE);
	}
	printf("ELF file detected!\n");
	close(fd);
	exit(EXIT_SUCCESS);
}
