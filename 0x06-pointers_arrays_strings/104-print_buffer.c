#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time.
 * @b: The buffer to print
 * @size: The number of bytes to be printe
 */
void print_buffer(char *b, int size)
{
	int bytes, indexing;

	for (bytes = 0; bytes < size; bytes = bytes + 10)
	{
		printf("%08x: ", bytes);

		for (indexing = 0; indexing < 10; indexing++)
		{
			if ((indexing + bytes) >= size)
				printf(" ");
			else
				printf("%02x", *(b + indexing + bytes));
			if ((indexing % 2) != 0 && indexing != 0)
				printf(" ");
		}
		for (indexing = 0; indexing < 10; indexing++)
		{
			if ((indexing + bytes) >= size)
				break;
			else if (*(b + indexing + bytes) >= 31 && *(b + indexing + bytes) <= 126)
				printf("%c", *(b + indexing + bytes));
			else
				printf(".");
		}
		if (bytes >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
