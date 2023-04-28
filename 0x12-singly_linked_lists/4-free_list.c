#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 *
 * @head: list of nodes.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	if (head != NULL && head->next != NULL)
		free_list(head->next);

	if (head->str)
		free(head->str);
	free(head);
}
