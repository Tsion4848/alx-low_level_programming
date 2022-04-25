#include "lists.h"
/**
 * add_nodeint_end - adding a node at the end
 * @head: the pointer that points to the struct
 * @n: integer in the struct
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *p;

	if (&*head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new-> n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		p = *head;

		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = new;
	}
	return (*head);
}
