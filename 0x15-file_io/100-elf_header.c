#include "main.h"

/**
 * if_elf - this function checks if the file is an ELF file.
 * @magicptr: this points to an array that contains the ELF magic numbers
 *
 * Description: the exit cod 98 is used if the file is not ELF
 */

void if_elf(unsigned char *magicptr)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (magicptr[i] != 127 && magicptr[i] != 'E' && magicptr[i] != 'L' && magicptr[i] != 'F')
		{
			fprintf(stderr, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * disp_magic - this function displays the ELF header magic numbers
 * @magicptr: this points to an array that contains the ELF magic numbers
 *
 * Description: the Magic numbers are displayed and seperated by spaces
 */

void disp_magic(unsigned char *magicptr)
{
	int i;
	printf("  Magic:  ");
	for (i = 0; i < EINIDENT; i++)
	{
		printf("%02x", magicptr[i]);

		if (i == EI_NIDENT - 1)
		{
			printf("\n");
		} else
		{
			printf(" ");
		}
	}
}

/**
 * disp_class - this function displays the ELF header's class
 * @magicptr: this points to an array that contains the ELF magic numbers.
 *
 * Description: class is printed
 */

void disp_class(unsigned char *magicptr)
{
	printf("  Class:                             ");
	switch (magicptr[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", magic[EI_CLASS]);
	}
}

/**
 * disp_data - this function displays the ELF header's data
 * @magicptr: this points to an array that contains the ELF magic numbers.
 *
 * Description: data is printed
 */

void disp_data(unsigned char *magicptr)
{
	printf("  Data:                              ");
	switch (magicptr[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", magic[EI_CLASS]);
	}
}

/**
 * disp_version - this function displays the ELF header's version
 * @magicptr: this points to an array that contains the ELF magic numbers.
 *
 * Description: prints the version
 */

void disp_version(unsigned char *magic)
{
	printf("  Version:                           %d", magicptr[EI_VERSION]);
	switch (magicptr[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
