#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: the head node
 * @n: data to insert
 *
 * Return: address of the new element or null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new != NULL)
	{
		new->next = *head;
		new->prev = NULL;
		new->n = n;

		if (*head != NULL)
		{
			(*head)->prev = new;
		}
		*head = new;
		return (new);
	}
	return (NULL);
}
