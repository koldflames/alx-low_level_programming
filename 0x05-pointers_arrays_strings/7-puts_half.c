#include "main.h"

/**
 * puts_half - entry point
 * @str: Accepts the array of charaters.
 * Decription: prints half of a string
 */

void puts_half(char *str)
{
	int integer;

	for (integer = 0; str[integer] != '\0'; integer++)
	;
	integer++;
	for (integer /= 2; str[integer] != '\0'; integer++)
	{
		_putchar(str[integer]);
	}
	_putchar('\n');
}
