#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - this function prints all the elements of the listint_t list
 * @h: this is a pointer that points to the head of the list
 *
 * Return: this returns the number of nodes in the list
 * By Enoh Peter Eihoda
 */

size_t print_listint(const listint_t *h)
{
	/* Introduce a counter to keep track of the number of nodes passed through */
	size_t count = 0;

	/*Use a while loop to do an iteration over the nodes of the list,
	 * and also to print the value given to the 'n' member of the current node in check */
       while (h != NULL)
       {
	       printf("%d\n", h->n);
	       h = h->next;
	       count++;
       }
	return count;       
}
