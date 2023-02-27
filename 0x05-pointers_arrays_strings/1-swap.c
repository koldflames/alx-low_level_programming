#include "main.h"

/**
 * swap_int - entry point
 * @a: first integer
 * @b: second integer
 * Description: swaps the values of integers
 * Return: Always 0
 */
void  swap_int(int *a, int *b)
{
	int holder = *a;

	*a = *b;
	*b = holder;
}
