#include "lists.h"

/**
 * print_listint - this function prints all the elements of the listint_t list
 * @h: this is a pointer for the head of the list
 *
 * Return: this returns the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	/* Introduce a counter to keep track of the number of nodes passed through */
	size_t count = 0;
	
	while (h != NULL)
       {
	       printf("%d\n", h->n);
	       h = h->next;
	       count++;

       }
	printf("->\n", count++);
	return 0;       
}
