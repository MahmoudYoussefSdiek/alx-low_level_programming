#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: list of nodes.
 * @str: value to insert into element.
 *
 * Return: new_node or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int str_length = 0;
	char *str_copy;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	str_length = strlen(str_copy);

	new_node->str = str_copy;
	new_node->len = str_length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
