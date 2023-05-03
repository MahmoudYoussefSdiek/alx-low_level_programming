#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 *
 * @head: pointer to pointer to list of nodes.
 * @index: index of the node.
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *deleted_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		deleted_node = *head;
		*head = deleted_node->next;
		free(deleted_node);
		return (1);
	}

	current_node = *head;
	while (current_node != NULL)
	{
		if (i == index - 1)
		{
			deleted_node = current_node->next;
			current_node->next = deleted_node->next;
			free(deleted_node);
			return (1);
		}
		i++;
		current_node = current_node->next;
	}
	return (-1);
}
