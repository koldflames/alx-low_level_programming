#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonal integers
 * @a: our matrix with integers
 * @size: size of our matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sumA = 0, sumB = 0;

	for (i = 0; i < size; i++)
	{
		sumA += a[i];
		a += size;
	}

	a -= size;

	for (j = 0; j < size; j++)
	{
		sumB += a[j];
		a -= size;
	}

	printf("%d, %d\n", sumA, sumB);
}
