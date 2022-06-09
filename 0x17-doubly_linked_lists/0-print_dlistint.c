#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: our list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodecount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
