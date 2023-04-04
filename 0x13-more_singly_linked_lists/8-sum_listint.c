#include "lists.h"

/**
 * sum_listint - this function returns the sum of all the data (n)
 * found in the listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: this returns the sum of all the data in the linked list,
 * or it returns 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum= 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
