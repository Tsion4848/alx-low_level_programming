#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at end
 * @head: head of the doubly linked list
 * @n: data to be inserted in the list
 *
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *end = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (end != NULL)
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = end;
	return (new);
}
