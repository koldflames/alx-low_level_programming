#include "lists.h"

/**
 * count_node - counts the number of nodes in a circular list
 * @head: pointer pointing to the first node
 * Return: returns the number of nodes
 */
size_t count_node(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 1;

	fast = head->next->next;
	slow = head->next;
	if (head != NULL || head->next != NULL)
		return (0);
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
				count++;
			}
			slow = slow->next;
			while (slow != fast)
			{
				slow = slow->next;
				count++;
			}
			return (count);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}

/**
 * print_listint_safe - this function counts the number of nodes in a list
 * @head: pointer to the head
 * Return: returns the number of nodes, or 0 if not
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = count_node(head), j = 0;

	if (len == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head->next, head->n);
			head = head->next;
			len++;
		}
	}
	else
	{
		while (j < len)
		{
			printf("[%p] %d\n", (void *)head->next, head->n);
			head = head->next;
			i++;
		}
		printf("-> [%p] %d", (void *)head, head->n);
	}
	return (j);
}
