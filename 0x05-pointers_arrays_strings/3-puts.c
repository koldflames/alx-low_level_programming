#include "main.h"

/**
 * _puts - entry point
 * @str: Accepts an array of strings
 * Description: Prints a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
