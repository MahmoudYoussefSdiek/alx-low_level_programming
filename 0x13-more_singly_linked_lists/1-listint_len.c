#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list.
 *
 * @h: list of nodes
 *
 * Return: node_counter
 **/

size_t listint_len(const listint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		node_counter++;
		h = h->next;
	}

	return (node_counter);
}
