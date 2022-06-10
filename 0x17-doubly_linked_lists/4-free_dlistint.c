#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: the head node
 *
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
