#include "dog.h"
#include <stdlib.h>

/**
 * copy_string - copies a string into new memory
 * @str: string to copy
 *
 * Return: pointer to copied string, or NULL
 */
char *copy_string(char *str)
{
	char *copy;
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	copy = malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	copy[i] = '\0';

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog, or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = copy_string(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = copy_string(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->age = age;

	return (new);
}
