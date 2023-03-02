#include "main.h"

/**
 * reverse_array - Reverses the array of integers
 * @a: The array to be reversed.
 * @n: Number of items in the array
 */

void reverse_array(int *a, int n)
{
	int tempo, indexer;

	indexer = n - 1;
	while (indexer >= (n / 2))
	{
		tempo = a[n - 1 - indexer];
		a[n - 1 - indexer] = a[indexer];
		a[indexer] = tempo;
		indexer--;
	}
}
