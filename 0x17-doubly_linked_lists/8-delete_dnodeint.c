#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a;
	dlistint_t *b;
	unsigned int i;

	a = *head;

	if (h1 != NULL)
		while (a->prev != NULL)
			a = a->prev;

	i = 0;

	while (a != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = a->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				b->next = a->next;

				if (a->next != NULL)
					a->next->prev = b;
			}

			free(a);
			return (1);
		}
		b = a;
		a = a->next;
		i++;
	}

	return (-1);
}
