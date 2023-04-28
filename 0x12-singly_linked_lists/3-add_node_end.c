#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 *
 * @head: list of nodes.
 * @str:  value to insert into element.
 *
 * Return: new_node or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	char *str_copy;
	int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	length = strlen(str_copy);

	new_node->str = str_copy;
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (new_node);
}
