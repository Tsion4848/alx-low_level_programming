#include "lists.h"
/**
 * add_node - add a new node at the beginning of a list
 * @head: head of the linked list
 * @str: string in the struct
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int elem = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	while (str[elem])
	{
		elem++;
	}

	new->len = elem;
	new->next = *head;
	*head = new;
	return (*head);
}
