#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at index
 *
 * @h: head of the list
 * @idx: index of the node
 * @n: data of the new node
 *
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node, *current;

	if (*h == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
