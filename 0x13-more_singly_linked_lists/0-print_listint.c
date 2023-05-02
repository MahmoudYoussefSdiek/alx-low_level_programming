#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 *
 * @h: list of nodes.
 *
 * Return: node_count
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
