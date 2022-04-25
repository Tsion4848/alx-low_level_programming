#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: the pointer to the struct
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint *tmp, *pre = *head;
	unsigned int i;

	if (pre == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(pre);
		return (1);
	}

	for (i = 0 ; i < (index - 1) ; i++)
	{
		if (pre->next == NULL)
		{
			return (-1);
		}
		pre = pre->next;
	}
	tmp = pre->next;
	pre->next = tmp->next;
	free(tmp);
	return (1);
}
