#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of new node
 *
 * Return: address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
