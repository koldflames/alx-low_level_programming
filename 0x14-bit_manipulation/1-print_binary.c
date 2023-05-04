#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @num: this is the number to convert to binary
 *
 * Return: returns void
 */

void print_binary(unsigned long num)
{
	int i = 0, bit;
	unsigned long temp, len = 0;
	if (num == 0)
	{
		_putchar('0');
		return;
	}
	temp = num;
	while (temp > 0)
	{
		temp >>= 1;
		len++;
	}
	while (i < len)
	{
		bit = (num >> (len - 1 - i)) & 1;
		putchar(bit + '0');
		i++;
	}
}
