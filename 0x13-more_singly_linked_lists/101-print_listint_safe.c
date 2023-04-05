#include "lists.h"

/**
 * print_listint_safe - counts the number of nodes in a circular list
 * @head: pointer pointing to the first node
 * Return: returns the number of nodes and 0 otherwise
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0, i = 0;
	const listint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp && temp > temp->next)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		len++;
	}

	if (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
		len++;
	}

	i = len;

	temp = head;
	while (i--)
		printf("[%p] %d\n", (void *)temp++, temp->n);

	return (len);
}
