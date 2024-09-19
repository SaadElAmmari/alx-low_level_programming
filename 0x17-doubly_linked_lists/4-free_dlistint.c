#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((new = head) != NULL)
	{
		head = head->next;
		free(new);
	}
}
