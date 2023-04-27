#include "list.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: list of nodes.
 *
 * Return: node_count.
 */
size_t print_list(const list_t *h)
{
	int node_count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		node_count++;
		h = h->next;
	}
	return (node_count);
}
