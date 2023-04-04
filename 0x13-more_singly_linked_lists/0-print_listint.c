#include "lists.h"

/**
 * print_listint - prints all the elements of the listint_t list
 * @h: the pointer of head of the list
 * Return: the number of nodes present in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t tally = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		tally++;
		h = h->next;
	}
	return (tally);
}
