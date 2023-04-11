#include "main.h"

/**
 * get_bit -this function puts the value of a bit at 1 in a given index.
 * @n: this is the number to check
 * @index: this is the index to check for the bit
 * Return: returns the value of the bit if it succeeds and -1 if not
 */

int set_bit(unsigned lon * n, unsigned int index)
{
	if (index >= sizeof(unsigned long) * 8)
	{
		return (-1);
	}
	*n |= 1UL << index;
	return (1);
}
