#include "hash_tables.h"

/**
 * shash_table_create - function that create a hash table
 *
 * @size: The size of the array
 *
 * Return: The hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(shash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	hash_table->shead = NULL;
	hash_table->stail = NULL;

	return (hash_table);
}

/**
 * shash_table_set - function that adds an element in a hash table
 *
 * @ht: The hash table
 * @key: The key string
 * @value: The value associated with the key
 *
 * Return: 1 or 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *new_node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		if (ht->shead != NULL)
			ht->shead->sprev = new_node;
		else
			ht->stail = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(key, temp->snext->key) > 0)
			temp = temp->snext;
		new_node->sprev = temp;
		new_node->snext = temp->snext;
		if (temp->snext != NULL)
			temp->snext->sprev = new_node;
		else
			ht->stail = new_node;
		temp->snext = new_node;
	}

	return (1);
}

/**
 * shash_table_get - function that gets an element in a hash table
 *
 * @ht: The hash table
 * @key: The key string
 *
 * Return: The value associated with the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - function that prints a hash table
 *
 * @ht: The hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int flag = 0;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function that prints a hash table in reverse
 *
 * @ht: The hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a hash table
 *
 * @ht: The hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
