#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer to the struct
 * @n: integer in the struct
 * @idx: index of the list where the new node should be added
 *
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *m = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0 ; i < idx ; i++)
		{
			m = m->next;
			if (m == NULL)
			{
				free(new);
				return (NULL);
			}
		}
		new->next = m->next;
		m->next = new;
	}
	return (new);
}
