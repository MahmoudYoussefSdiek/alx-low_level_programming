#include "lists.h"

/**
 * dlistint_len - function that count nodes in a list
 *
 * @h: pointer to the head of the list
 *
 * Return: count of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
