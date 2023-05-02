#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 *
 * @head: list of nodes.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head);
	}
}
