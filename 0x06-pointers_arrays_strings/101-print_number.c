#include "main.h"

/**
 * print_number: function that prints an integer.
 * @n: accepts integers
 */
void print_number(int n)
{
	int number = n
	
	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if ((number / 10) > 0)
	{
		printf("%i", number / 10);
	}

	_putchar((number % 10) + '0');
}
