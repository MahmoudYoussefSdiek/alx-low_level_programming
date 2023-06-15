#include "lists.h"

/**
 * get_dnodeint_at_index - function that get node of
 * a linked list by index
 *
 * @head: head of the list
 * @index: index of the node
 *
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
