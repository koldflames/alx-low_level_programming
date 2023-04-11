#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: this is the number to convert to binary
 *
 * Return: returns void
 */

void print_binary(unsigned long n)
{
	int i, bit;
	unsigned long temp, len = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = n;
	while (temp > 0)
	{
		temp >>= 1;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		_putchar(bit + '0');
	}
}
