#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - this prints a name
 * @name: this is the name to print
 * @f: this is the pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
