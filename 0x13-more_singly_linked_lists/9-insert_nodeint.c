#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 *
 * @head: pointer to pointer to list of nodes.
 * @idx: index of the node.
 * @n: the data of the new node.
 *
 * Return: new_node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current_node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	while (current_node != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		i++;
		current_node = current_node->next;
	}
	free(new_node);
	return (NULL);
}
