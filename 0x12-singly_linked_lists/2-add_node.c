
#include "lists.h"

/**
 * _strlen - returns length of str
 * @s: char
 * Return: c
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of list
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int l = 0;

	while (str[l])
		l++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = l;
	new->next = *head;
	*head = new;
	return (*head);
}
