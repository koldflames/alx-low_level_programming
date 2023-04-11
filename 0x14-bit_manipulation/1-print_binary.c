#include "main.h"

/**
 * print_binary - this function prints a number in binary notation form
 * @n: this is the number to print
 *
 * Return: returns void
 */

void print_binary(unsigned long n)
{
	int num_bits = sizeof(unsigned long) * 8;
	unsigned long mask = 1UL << (num_bits - 1);

	while (mask > 0)
	{
		if (n & mask)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		mask >>= 1;
	}
}
