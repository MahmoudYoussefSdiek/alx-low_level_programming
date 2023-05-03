#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 *
 * @head: pointer to pointer to list of nodes.
 *
 * Return: *head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	prev_node = NULL;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
