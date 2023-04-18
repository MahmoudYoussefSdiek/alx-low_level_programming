#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculate length of a string
 *
 * @string: string to evaluate
 *
 * Return: length
 */
int _strlen(char *string)
{
	int length;

	length = 0;
	while (string[length] != '\0')
		length++;

	return (length);
}

/**
 * *_strcpy - copies the string
 *
 * @dest: pointer to the buffer we use to save our string
 * @src: string we will take copy from it
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (src[length] != '\0')
		length++;

	for (i = 0; i < length; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	(*dog).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog);
		free((*dog).name);
		return (NULL);
	}

	_strcpy((*dog).name, name);
	_strcpy((*dog).owner, owner);
	(*dog).age = age;

	return (dog);
}
