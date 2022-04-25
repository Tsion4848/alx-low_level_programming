#include "lists.h"
/**
 * add_nodeint - adds a node at the beginning
 * @head: the pointer that points to the struct
 * @n: integer in the struct
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return NULL;
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
