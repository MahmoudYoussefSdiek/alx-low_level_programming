#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * @head: pointer to pointer to list of nodes.
 *
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *first_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	first_node = *head;
	*head = (*head)->next;

	free(first_node);
	return (n);
}
