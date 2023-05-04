#include "main.h"

/**
 * set_bit - this function sets the value of a bit at a given index to 1.
 * @n: the number to modify
 * @index: the index of the bit to set to 1
 * Return: 1 if successful, -1 otherwise
 */

int set_bit(unsigned long *n, unsigned int index)
{
	unsigned long mask = 1UL;
	unsigned int i;

	if (index >= sizeof(unsigned long) * 8)
	{
		return (-1);
	}

	for (i = 0; i < index; i++)
	{
		mask <<= 1;
	}

	*n |= mask;
	return (1);
}

