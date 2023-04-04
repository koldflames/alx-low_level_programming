#include "lists.h"

/**
 * pop_listint - this function deletes the head of a linked list
 * @head: a pointer to the head of the list
 *
 * Return: this returns the value of the n field of the original head,
 * or it returns 0 if it's empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temporal;
	int n;

	if (head == NUL || *head == NULL)
		return (0);

	temporal = *head;
	n = temporal->n;
	*head = (*head)->next;
	free(temporal);

	return (n);
}
