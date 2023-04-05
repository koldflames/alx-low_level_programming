#include "lists.h"
/**
 *find_listint_loop - a function that finds the loop in a linked list.
 *@head: points to the head in a linked list
 *Return: return the address of the node or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slower, *faster;

	if (head == NULL)
	{
		return (NULL);
	}

	slower = head;
	faster = head;

	while (faster != NULL && faster->next != NULL)
	{
		slower = slower->next;
		faster = faster->next->next;

		if (slower == faster)
		{
			slower = head;
			while (slower != faster)
			{
				slower = slower->next;
				faster = faster->next;
			}
			return (slower);
		}
	}
	return (NULL);
}
